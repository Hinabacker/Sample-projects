#include <Arduino.h>
#include <esp_display_panel.hpp>
#include <lvgl.h>
#include <ui/ui.h>
#include "lvgl_v8_port.h"

#include <WiFi.h>
#include <HTTPClient.h>
#include "time.h"

using namespace esp_panel::drivers;
using namespace esp_panel::board;

#define RS485_RX_PIN  15
#define RS485_TX_PIN  16

#define RS485 Serial1

String receivedData; 
static char timeStr[40];
char itemSelected[32];
String itemsel;
String weightValue;

String weight;
String qrLabel;
String timeLabel;
String opId;
String farmerId;
String farmerName;
String region;

const char* ssid       = "hictros_wifi";
const char* password   = "hictros@2024";
String GOOGLE_SCRIPT_ID = "AKfycbxb1VWTp7znVTcvs2s5cRu8Cw9Dx2MbRAwIXkl0a_9-inLqNe7jl7yxCQSf5j9Rc_cD";

const char* ntpServer           = "pool.ntp.org";
const long  gmtOffset_sec       = 19800;
const int   daylightOffset_sec  = 0;

void printLocalTime()
{
  struct tm timeinfo;
  if(!getLocalTime(&timeinfo)){
    Serial.println("Failed to obtain time");
    return;
  }

  strftime(timeStr, sizeof(timeStr), "%H:%M:%S,%d-%m-%Y", &timeinfo);
  lv_label_set_text(ui_timeLabel, timeStr);
}

void parseRS485Data(String receivedData) 
{
  if (receivedData.length() > 3) {  // Ensure valid data
    weightValue = receivedData.substring(3);  // Extract weight (after first 3 chars)
    Serial.print("Extracted Weight: ");
    Serial.println(weightValue);
  } 
  else {
    Serial.println("Invalid data received");
  }
}
void sendToGoogleSheets() {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    
    String timestamp(timeStr);           // Remove leading/trailing spaces

    String urlFinal = "https://script.google.com/macros/s/"+GOOGLE_SCRIPT_ID+"/exec?"+"time=" + timeLabel + "&weight=" + String(weight) + "&opid=" + String(opId) + "&item=" + String(itemSelected) +
                           "&farmerid=" + String(farmerId) + "&farmername=" + String(farmerName) + "&region=" + String(region);

    // String urlFinal = "https://script.google.com/macros/s/"+GOOGLE_SCRIPT_ID+"/exec?"+"time=" + timestamp + "&uid=" + String(uid) + "&item=" + String(item);
    // Construct URL with raw strings (no encoding)
    // String urlFinal = "https://script.google.com/macros/s/" + GOOGLE_SCRIPT_ID + "/exec?" + "time=" + timestamp;
    //                   "time=" + time +
    //                   "&item=" + item +
    //                   "&weight=" + weight +
    //                   "&uid=" + uid;

    Serial.print("Sending to Google Sheets: ");
    Serial.println(urlFinal);

    http.begin(urlFinal.c_str());
    http.setFollowRedirects(HTTPC_STRICT_FOLLOW_REDIRECTS);

    int httpCode = http.GET();

    if (httpCode > 0) {
      String payload = http.getString();
      Serial.println("Response: " + payload);
    } else {
      Serial.println("Error - HTTP Code: " + String(httpCode));
    }

    http.end();
  } else {
    Serial.println("WiFi not connected");
  }
}

void receiveRS485Data() {
  if (RS485.available()) { // Check if data is available
    receivedData = RS485.readStringUntil('\n'); // Read incoming data
    receivedData.trim(); // Remove any trailing newline characters

    parseRS485Data(receivedData);
    lv_label_set_text(ui_weightLabel, weightValue.c_str());

  }
}

void handleTextInput()
{
  if(data)
  {
    const char * input = lv_textarea_get_text(ui_TextArea);

    if(active_textarea == ui_opidTextArea)
    {
      printf("Op ID : %s\n", input);
      lv_textarea_set_text(active_textarea, input);
    }
    else if(active_textarea == ui_fidTextArea)
    {
      printf("Farmer ID : %s\n", input);
      lv_textarea_set_text(active_textarea, input);
    }
    else if(active_textarea == ui_fnameTextArea)
    {
      printf("Farmer Name : %s\n", input);
      lv_textarea_set_text(active_textarea, input);
    }
    else if(active_textarea == ui_regionTextArea)
    {
      printf("Region : %s\n", input);
      lv_textarea_set_text(active_textarea, input);
    }
  
    lv_textarea_set_text(ui_TextArea, "");
    data = false;
  }
  lv_obj_clear_state(ui_submitButton, LV_STATE_DISABLED);
    lv_obj_add_state(ui_submitButton, LV_STATE_USER_1);
}

void clearFormFields()
{
  if(clear) 
  {
    lvgl_port_lock(-1);
    lv_textarea_set_text(ui_opidTextArea, "");
    lv_textarea_set_text(ui_fidTextArea, "");
    lv_textarea_set_text(ui_fnameTextArea, "");
    lv_textarea_set_text(ui_regionTextArea, "");
    lv_dropdown_set_selected(ui_Dropdown1, 0);
    lvgl_port_unlock();
  
    clear = false;
  }
}

void changeState()
{
  lv_dropdown_get_selected_str(ui_Dropdown1, itemSelected, sizeof(itemSelected));

  String weight = lv_label_get_text(ui_weightLabel);
  String qrLabel = lv_label_get_text(ui_qrLabel);
  String timeLabel = lv_label_get_text(ui_timeLabel);
  String opId = lv_textarea_get_text(ui_opidTextArea);
  String farmerId = lv_textarea_get_text(ui_fidTextArea);
  String farmerName = lv_textarea_get_text(ui_fnameTextArea);
  String region = lv_textarea_get_text(ui_regionTextArea);

  if(weight.length() > 0 && qrLabel.length() > 0 && timeLabel.length() > 0 && opId.length() > 0 && farmerId.length() > 0 && farmerName.length() > 0 && region.length() > 0 && strlen(itemSelected) > 0 && String(itemSelected) != "                             -        ")
  
  {
    lv_obj_clear_state(ui_submitButton, LV_STATE_DISABLED);
    lv_obj_add_state(ui_submitButton, LV_STATE_USER_1);
  }
  else
  {
    lv_obj_clear_state(ui_submitButton, LV_STATE_USER_1);
    lv_obj_add_state(ui_submitButton, LV_STATE_DISABLED);
  }
}

void setup()
{
    Serial.begin(115200);

    //connect to WiFi
    Serial.printf("Connecting to %s ", ssid);
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      Serial.print(".");
    }
    Serial.println(" CONNECTED");

    RS485.begin(115200, SERIAL_8N1, RS485_RX_PIN, RS485_TX_PIN);
    while (!RS485) {
      delay(10); // Wait for initialization to succeed
      Serial.println("RS485 Initialization failed");
    }

    Serial.println("Initializing board");
    Board *board = new Board();
    board->init();
#if LVGL_PORT_AVOID_TEARING_MODE
    auto lcd = board->getLCD();
    // When avoid tearing function is enabled, the frame buffer number should be set in the board driver
    lcd->configFrameBufferNumber(LVGL_PORT_DISP_BUFFER_NUM);
#if ESP_PANEL_DRIVERS_BUS_ENABLE_RGB && CONFIG_IDF_TARGET_ESP32S3
    auto lcd_bus = lcd->getBus();
    /**
     * As the anti-tearing feature typically consumes more PSRAM bandwidth, for the ESP32-S3, we need to utilize the
     * "bounce buffer" functionality to enhance the RGB data bandwidth.
     * This feature will consume `bounce_buffer_size * bytes_per_pixel * 2` of SRAM memory.
     */
    if (lcd_bus->getBasicAttributes().type == ESP_PANEL_BUS_TYPE_RGB) {
        static_cast<BusRGB *>(lcd_bus)->configRGB_BounceBufferSize(lcd->getFrameWidth() * 10);
    }
#endif
#endif
    assert(board->begin());

    Serial.println("Initializing LVGL");
    lvgl_port_init(board->getLCD(), board->getTouch());

    Serial.println("Creating UI");

    lvgl_port_lock(-1);

    ui_init();

    configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
    printLocalTime();

    lvgl_port_unlock();
}

void loop()
{
  receiveRS485Data();
  printLocalTime();
  handleTextInput();
  changeState();

  if(submit)
  {
    lv_dropdown_get_selected_str(ui_Dropdown1, itemSelected, sizeof(itemSelected));

    weight = lv_label_get_text(ui_weightLabel);
    qrLabel = lv_label_get_text(ui_qrLabel);
    timeLabel = lv_label_get_text(ui_timeLabel);
    opId = lv_textarea_get_text(ui_opidTextArea);
    farmerId = lv_textarea_get_text(ui_fidTextArea);
    farmerName = lv_textarea_get_text(ui_fnameTextArea);
    region = lv_textarea_get_text(ui_regionTextArea);
    Serial.println(opId);

    sendToGoogleSheets();

    lvgl_port_lock(-1);
    lv_dropdown_set_selected(ui_Dropdown1, 0);
    lv_label_set_text(ui_weightLabel, "");
    lv_label_set_text(ui_qrLabel, "");
    lvgl_port_unlock();

    submit = false;
  }

  clearFormFields();
  delay(100);
}
