#include "waveshare_twai_port.h"

static bool driver_installed = false; // Flag to check if the driver is installed

void setup() {
  // Start Serial:
  Serial.begin(115200);// Flag to check if the driver is installed

  Serial.println("Initialize IO expander");
  /* Initialize IO expander */
  ESP_IOExpander_CH422G *expander = new ESP_IOExpander_CH422G((i2c_port_t)I2C_MASTER_NUM, ESP_IO_EXPANDER_I2C_CH422G_ADDRESS, I2C_MASTER_SCL_IO, I2C_MASTER_SDA_IO);
  expander->init();
  expander->begin();
  Serial.println("Set the IO0-7 pin to output mode.");
  expander->enableAllIO_Output();
  expander->multiDigitalWrite(TP_RST | LCD_RST | USB_SEL, HIGH);
  expander->digitalWrite(LCD_BL , LOW);
  
  driver_installed = waveshare_twai_init(); // Flag to check if the driver is installed
}

void loop() {
  if (!driver_installed) {
    // Driver not installed
    delay(1000);
    return;
  }
  waveshare_twai_receive();// Call the receive function if the driver is installed
}
