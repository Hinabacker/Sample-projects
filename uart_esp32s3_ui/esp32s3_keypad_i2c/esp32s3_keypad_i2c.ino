#include <Arduino.h>
#include <ESP_Panel_Library.h>
#include <ESP_IOExpander_Library.h>

#include <lvgl.h>
#include "lvgl_port_v8.h"
#include <ui/ui.h>

// Extend IO Pin define
#define TP_RST 1
#define LCD_BL 2
#define LCD_RST 3
#define SD_CS 4
#define USB_SEL 5     // USB select pin

#define RS485_RX_PIN  15
#define RS485_TX_PIN  16

#define RS485 Serial1

const char * input = "";
String receivedData;

// SCL 22 SDA 21    (FOR ESP32 DEVKIT SLAVE)

void sendRS485Data(String message) {
  RS485.println(message); // Send data
  Serial.print("Sent: ");
  Serial.println(message);
}
void receiveRS485Data() {
  if (RS485.available()) { // Check if data is available
    receivedData = RS485.readStringUntil('\n'); // Read incoming data
    receivedData.trim(); // Remove any trailing newline characters

    Serial.print("Received: ");
    Serial.println(receivedData);

    
  }
}
// void press_enter(lv_event_t * e)
// {
// 	input = lv_textarea_get_text(ui_TextArea);
// 	printf("STEPS: %s\n", input);
//   sendRS485Data(input);
// 	lv_textarea_set_text(ui_TextArea, "");
// }


void setup()
{
    String title = "LVGL porting example";

    Serial.begin(115200);

    RS485.begin(115200, SERIAL_8N1, RS485_RX_PIN, RS485_TX_PIN);
    while (!RS485) {
      delay(10); // Wait for initialization to succeed
      Serial.println("RS485 Initialization failed");
    }


    pinMode(GPIO_INPUT_IO_4, OUTPUT);

    /**
     * These development boards require the use of an IO expander to configure the screen,
     * so it needs to be initialized in advance and registered with the panel for use.
     */
    Serial.println("Initialize IO expander");
    
    /* Initialize IO expander */
    ESP_IOExpander_CH422G *expander = new ESP_IOExpander_CH422G((i2c_port_t)I2C_MASTER_NUM, ESP_IO_EXPANDER_I2C_CH422G_ADDRESS, I2C_MASTER_SCL_IO, I2C_MASTER_SDA_IO);
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

    /* Create a simple label */
    // lv_obj_t *label = lv_label_create(lv_scr_act());
    // lv_label_set_text(label, title.c_str());
    // lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);

    /**
     * Try an example. Don't forget to uncomment header.
     * See all the examples online: https://docs.lvgl.io/master/examples.html
     * source codes: https://github.com/lvgl/lvgl/tree/e7f88efa5853128bf871dde335c0ca8da9eb7731/examples
     */
    //  lv_example_btn_1();

    /**
     * Or try out a demo.
     * Don't forget to uncomment header and enable the demos in `lv_conf.h`. E.g. `LV_USE_DEMOS_WIDGETS`
     * Comment out lv_demo_widgets and directly call your own compiled UI program here, so that your own UI interface is displayed instead of running the LVGL demo.
     */
    ui_init();
    
    // lv_demo_widgets();
    // lv_demo_benchmark();
    // lv_demo_music();
    // lv_demo_stress();
    
    /* Release the mutex */
    lvgl_port_unlock();
    

    Serial.println(title + " end");
}

void loop()
{
  receiveRS485Data();
   if (sc1) {
    Serial.println("sc1 is true, sending '01'");
    sendRS485Data("01");
    sc1 = false; // Reset flag after sending
  }

  // Check if received data matches expected response
  if (receivedData == "01") {
    Serial.println("Received '01', switching to Screen2");
    _ui_screen_change(&ui_Screen2, LV_SCR_LOAD_ANIM_NONE, 50, 0, &ui_Screen2_screen_init);
    receivedData = ""; // Clear received data to prevent reprocessing
  }
  
  if(adhr)
  {
    Serial.println("adhr true");
    const char *mobileNumber = lv_textarea_get_text(ui_TextAreaaadhaar2);
    Serial.println(mobileNumber);
    sendRS485Data(mobileNumber);
    adhr = false;
    
  }
  if(receivedData == "02")
  {
    Serial.println("Received '02', switching to Screen3");
    lv_scr_load(ui_Screen3);
    receivedData = "";
  }
  delay(500);
    
}