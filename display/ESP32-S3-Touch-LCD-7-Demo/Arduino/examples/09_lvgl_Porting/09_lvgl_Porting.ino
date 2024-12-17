#define BLYNK_TEMPLATE_ID "TMPL3sD7UHxgO"
#define BLYNK_TEMPLATE_NAME "Weather Station"
#define BLYNK_AUTH_TOKEN "OzzyarMqelHu1lFboSORgU-gO_lCUrmL"

#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <WiFiClient.h>
#include <HTTPClient.h>
#include <BlynkSimpleEsp32.h>

#include <Arduino.h>
#include <ESP_Panel_Library.h>
#include <ESP_IOExpander_Library.h>

#include <lvgl.h>
#include "lvgl_port_v8.h"
#include <ui/ui.h>

#include <Wire.h>
#include "Arduino.h"
#include "PCF8574.h"

// Extend IO Pin define
#define TP_RST 1
#define LCD_BL 2
#define LCD_RST 3
#define SD_CS 4
#define USB_SEL 5     // USB select pin

char auth[] = BLYNK_AUTH_TOKEN;
String blynkToken = BLYNK_AUTH_TOKEN;

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "hictros_wifi";  // Wi-Fi name
char pass[] = "hictros@2024";  // Wi-Fi password
BlynkTimer timer;

lv_obj_t *temp_label;
//ESP_Panel *panel; 
HTTPClient http;
bool isTimerRunning = false;
bool isLoopRunning = false;
 
PCF8574 pcf8574(0x27);
void setup()
{
    String title = "LVGL porting example";

    Serial.begin(115200);

    pinMode(GPIO_INPUT_IO_4, OUTPUT);
    //fan = false;

    delay(10);
    Serial.print("Connecting to ");
    Serial.println(ssid);

    WiFi.begin(ssid, pass);
    while (WiFi.status() != WL_CONNECTED) 
    {
      delay(500);
      Serial.print(".");
    }

    Serial.println("WiFi connected");  

    Blynk.begin(auth, ssid, pass);
    delay(100);
    pcf8574.digitalWrite(P4, LOW);
    pcf8574.digitalWrite(P5, LOW);
    pcf8574.digitalWrite(P6, LOW);
    pcf8574.pinMode(P4, OUTPUT);
    pcf8574.pinMode(P5, OUTPUT);
    pcf8574.pinMode(P6, OUTPUT);
     // Turn OFF
	  pcf8574.begin();
    delay(500);

    
    Serial.println("Initialize IO expander");
    
    /* Initialize IO expander */
    ESP_IOExpander_CH422G *expander = new ESP_IOExpander_CH422G((i2c_port_t)I2C_MASTER_NUM, ESP_IO_EXPANDER_I2C_CH422G_ADDRESS, I2C_MASTER_SCL_IO, I2C_MASTER_SDA_IO);
    //ESP_IOExpander *expander = new ESP_IOExpander_CH422G((i2c_port_t)I2C_MASTER_NUM, ESP_IO_EXPANDER_I2C_CH422G_ADDRESS, I2C_MASTER_SCL_IO, I2C_MASTER_SDA_IO);
    expander->init();
    expander->begin();

    Serial.println("Set the IO0-7 pin to output mode.");
    expander->enableAllIO_Output();
    expander->digitalWrite(TP_RST , HIGH);
    expander->digitalWrite(LCD_RST , HIGH);
    expander->digitalWrite(LCD_BL , HIGH);
    delay(100);
    
    // GT911 initialization, must be added, otherwise the touch screen will not be recognized  
    // Initialization begin
    expander->digitalWrite(TP_RST , LOW);
    delay(100);
    digitalWrite(GPIO_INPUT_IO_4, LOW);
    delay(100);
    expander->digitalWrite(TP_RST , HIGH);
    delay(200);
    // Initialization end

    Serial.println(title + " start");

    Serial.println("Initialize panel device");
    ESP_Panel *panel = new ESP_Panel();
    panel->init();
    
#if LVGL_PORT_AVOID_TEAR
    // When avoid tearing function is enabled, configure the RGB bus according to the LVGL configuration
    ESP_PanelBus_RGB *rgb_bus = static_cast<ESP_PanelBus_RGB *>(panel->getLcd()->getBus());
    rgb_bus->configRgbFrameBufferNumber(LVGL_PORT_DISP_BUFFER_NUM);
    rgb_bus->configRgbBounceBufferSize(LVGL_PORT_RGB_BOUNCE_BUFFER_SIZE);
#endif

    panel->begin();

    Serial.println("Initialize LVGL");
    lvgl_port_init(panel->getLcd(), panel->getTouch());

    Serial.println("Create UI");
    /* Lock the mutex due to the LVGL APIs are not thread-safe */
    lvgl_port_lock(-1);

    
    ui_init();
    lv_timer_t * timer = lv_timer_create(my_timer, 1500,  NULL);


    /* Release the mutex */
    lvgl_port_unlock();

    Serial.println(title + " end");
}
void my_timer(lv_timer_t * timer)
{
  if (isLoopRunning) 
  {
    return; // Skip if the loop logic is running
  }

  isTimerRunning = true;
  if (WiFi.status() == WL_CONNECTED) {
    //HTTPClient http;

    // API Call 1
    http.begin("https://blr1.blynk.cloud/external/api/get?token=" + blynkToken + "&V0"); 
    int httpResponseCode1 = http.GET();
    if (httpResponseCode1 > 0) {
      String response1 = http.getString();
      Serial.println("Temperature: " + response1);
      lv_label_set_text(ui_TempLabel2, response1.c_str());
      float temperatureFloat = response1.toFloat();
      
      // lv_coord_t temperatureValue = static_cast<lv_coord_t>(temperatureFloat);
      
      lv_chart_set_next_value(ui_TempChart, ui_TempChart_series_1, temperatureFloat);
      lv_chart_refresh(ui_TempChart);
    } else {
      Serial.print("Error in API 1: ");
      Serial.println(httpResponseCode1);
    }
    http.end();  // Free resources for the first request

    delay(100);  // Short delay between API calls

    // API Call 2
    http.begin("https://blr1.blynk.cloud/external/api/get?token=" + blynkToken + "&V1"); 
    int httpResponseCode2 = http.GET();
    if (httpResponseCode2 > 0) {
      String response2 = http.getString();
      Serial.println("Response from API 2: " + response2);
      if(response2 == "1") //for high temperature 
      {
        lv_obj_set_style_bg_color(ui_RedIndicator, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_color(ui_GreenIndicator, lv_color_hex(0xD7D0D0), LV_PART_MAIN | LV_STATE_DEFAULT);
        pcf8574.digitalWrite(P5, HIGH); // turning on the red led 
        pcf8574.digitalWrite(P4, LOW); // turning off the green led
        pcf8574.digitalWrite(P6, HIGH); // turning on the fan 
        // if (!manualControl) 
        // { // Only turn on the fan if not manually controlled
        //   pcf8574.digitalWrite(P6, HIGH); // Turn on the fan
        //   Serial.println("Fan turned ON automatically.");
        // }
      }
      
    } else {
      Serial.print("High_temp: ");
      Serial.println(httpResponseCode2);
    }
    http.end();  // Free resources for the second request

    delay(100);  // Short delay between API calls

    // API Call 3
    http.begin("https://blr1.blynk.cloud/external/api/get?token=" + blynkToken + "&V2"); 
    int httpResponseCode3 = http.GET();
    if (httpResponseCode3 > 0) {
      String response3 = http.getString();
      Serial.println("Normal_temp: " + response3);
      if(response3 == "1") // for normal temperature
      {
        lv_obj_set_style_bg_color(ui_GreenIndicator, lv_color_hex(0x78C878), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_color(ui_RedIndicator, lv_color_hex(0xD7D0D0), LV_PART_MAIN | LV_STATE_DEFAULT);
        pcf8574.digitalWrite(P4, HIGH); // turning  green led on 
        pcf8574.digitalWrite(P5, LOW); // turning red off
        pcf8574.digitalWrite(P6, LOW);
        // if (!manualControl) 
        // { // Only turn on the fan if not manually controlled
        //   pcf8574.digitalWrite(P6, LOW); // Turn on the fan
        //   Serial.println("Fan turned ON automatically.");
        // }
      }
      
      
    } else {
      Serial.print("Error in API 3: ");
      Serial.println(httpResponseCode3);
    }
    http.end();  // Free resources for the third request

  } else {
    Serial.println("WiFi disconnected");
  }
  
  
}


void loop()
{
  //lv_timer_handler();
  Blynk.run();
  timer.run();
  if(isTimerRunning)
  {
    return;
  }
  isLoopRunning = true;
  if(fan == true)
  {
    Serial.println("fan is true");
    
    http.begin("https://blr1.blynk.cloud/external/api/update?token=" + blynkToken + "&V3=1"); 
    int httpResponseCode1 = http.GET();
    if (httpResponseCode1 > 0) 
    {
      Serial.println("Switch on V3 turned ON in Blynk app.");
      
    } 
    else 
    {
      Serial.print("Error in API 1: ");
      Serial.println(httpResponseCode1);
    }
    http.end();  // Free resources for the first request
  }
  else if(fan == false)
  {
    Serial.println("fan is false");
    http.begin("https://blr1.blynk.cloud/external/api/update?token=" + blynkToken + "&V3=0"); 
    int httpResponseCode1 = http.GET();
    if (httpResponseCode1 > 0) 
    {
      Serial.println("Switch on V3 turned OFF in Blynk app.");
      
    } else {
      Serial.print("Error in API 1: ");
      Serial.println(httpResponseCode1);
    }
    http.end();
    delay(50);
  }
  delay(1000);

}
// use this below blink for working with switch
// BLYNK_WRITE(V3)
// {
//   if
//   int Fan = param.asInt();
//   manualControl = true;
//   Serial.println(Fan);
//   if (Fan == 1) 
//   {
//     lv_obj_add_state(ui_FanSwitch, LV_STATE_CHECKED);
//     pcf8574.digitalWrite(P6, HIGH);// Turn ON
//     Serial.println("Optocoupler ON");

//     // Optionally trigger the associated event
//     //lv_event_send(ui_FanSwitch, LV_EVENT_PRESSED, NULL);
    
//   } 
//   else
//   {
    
//     //Serial.println("fan off");
//     lv_obj_clear_state(ui_FanSwitch, LV_STATE_CHECKED);
//     pcf8574.digitalWrite(P6, LOW); // Turn OFF
//     Serial.println("Optocoupler OFF");

//     // Optionally trigger the associated event
//     //lv_event_send(ui_FanSwitch, LV_EVENT_PRESSED, NULL);
//   }
// }
