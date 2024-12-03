#include "waveshare_lcd_port.h"

#if EXAMPLE_ENABLE_PRINT_LCD_FPS
DRAM_ATTR int frame_count = 0; // Frame count for FPS calculation

int fps = 0; // Frames per second

DRAM_ATTR long start_time = 0; // Start time for FPS measurement


// Callback function for end of VSync
IRAM_ATTR bool onVsyncEndCallback(void *user_data)
{
    long frame_start_time = *(long *)user_data; // Get frame start time
    if (frame_start_time == 0) {
        (*(long *)user_data) = millis(); // Update frame start time
        return false; // Continue the loop
    }

    frame_count++; // Increment frame count
    if (frame_count >= EXAMPLE_LCD_FPS_COUNT_MAX) {
        fps = EXAMPLE_LCD_FPS_COUNT_MAX * 1000 / (millis() - frame_start_time); // Calculate FPS
        frame_count = 0; // Reset frame count 
        (*(long *)user_data) = millis(); // Update frame start time
    }

    return false; // Continue the loop
}
#endif

// Function to initialize the LCD
void waveshare_lcd_init(void)
{
    Serial.println("Initialize IO expander");
    /* Initialize IO expander */
    ESP_IOExpander_CH422G *expander = new ESP_IOExpander_CH422G((i2c_port_t)I2C_MASTER_NUM, ESP_IO_EXPANDER_I2C_CH422G_ADDRESS, I2C_MASTER_SCL_IO, I2C_MASTER_SDA_IO);
    expander->init(); // Initialize the expander
    expander->begin(); // Begin expander operation

    Serial.println("Set the IO0-7 pin to output mode.");
    expander->enableAllIO_Output();
    expander->digitalWrite(TP_RST , HIGH);
    expander->digitalWrite(LCD_RST , HIGH); // Set reset pins high
    expander->digitalWrite(LCD_BL, LOW); // Turn off backlight
    delay(100); // Wait for 100 ms

    Serial.println("Create RGB LCD bus");

    // Create an RGB panel bus
    ESP_PanelBus_RGB *panel_bus = new ESP_PanelBus_RGB(EXAMPLE_LCD_WIDTH, EXAMPLE_LCD_HEIGHT,
                                                       EXAMPLE_LCD_PIN_NUM_RGB_DATA0, EXAMPLE_LCD_PIN_NUM_RGB_DATA1,
                                                       EXAMPLE_LCD_PIN_NUM_RGB_DATA2, EXAMPLE_LCD_PIN_NUM_RGB_DATA3,
                                                       EXAMPLE_LCD_PIN_NUM_RGB_DATA4, EXAMPLE_LCD_PIN_NUM_RGB_DATA5,
                                                       EXAMPLE_LCD_PIN_NUM_RGB_DATA6, EXAMPLE_LCD_PIN_NUM_RGB_DATA7,
                                                       EXAMPLE_LCD_PIN_NUM_RGB_DATA8, EXAMPLE_LCD_PIN_NUM_RGB_DATA9,
                                                       EXAMPLE_LCD_PIN_NUM_RGB_DATA10, EXAMPLE_LCD_PIN_NUM_RGB_DATA11,
                                                       EXAMPLE_LCD_PIN_NUM_RGB_DATA12, EXAMPLE_LCD_PIN_NUM_RGB_DATA13,
                                                       EXAMPLE_LCD_PIN_NUM_RGB_DATA14, EXAMPLE_LCD_PIN_NUM_RGB_DATA15,
                                                       EXAMPLE_LCD_PIN_NUM_RGB_HSYNC, EXAMPLE_LCD_PIN_NUM_RGB_VSYNC,
                                                       EXAMPLE_LCD_PIN_NUM_RGB_PCLK, EXAMPLE_LCD_PIN_NUM_RGB_DE,
                                                       EXAMPLE_LCD_PIN_NUM_RGB_DISP);

    // Configure RGB timing frequency
    panel_bus->configRgbTimingFreqHz(EXAMPLE_LCD_RGB_TIMING_FREQ_HZ); 
    
    // Configure RGB timing porch settings
    panel_bus->configRgbTimingPorch(EXAMPLE_LCD_RGB_TIMING_HPW, EXAMPLE_LCD_RGB_TIMING_HBP, EXAMPLE_LCD_RGB_TIMING_HFP,
                                    EXAMPLE_LCD_RGB_TIMING_VPW, EXAMPLE_LCD_RGB_TIMING_VBP, EXAMPLE_LCD_RGB_TIMING_VFP);

    panel_bus->configRgbBounceBufferSize(EXAMPLE_LCD_WIDTH * 10); // Set bounce buffer size to avoid screen drift
    panel_bus->configRgbFlagDispActiveLow(); // Set display active low
    panel_bus->begin(); // Begin panel bus operation

    Serial.println("Create LCD device"); 
    // Create an instance of the LCD
    ESP_PanelLcd *lcd = new EXAMPLE_LCD_CLASS(EXAMPLE_LCD_NAME, panel_bus, EXAMPLE_LCD_COLOR_BITS, EXAMPLE_LCD_PIN_NUM_RST);
    lcd->init(); // Initialize the LCD
    lcd->reset(); // Reset the LCD
    lcd->begin(); // Begin LCD operation

#if EXAMPLE_ENABLE_PRINT_LCD_FPS
    lcd->attachRefreshFinishCallback(onVsyncEndCallback, (void *)&start_time); // Attach VSync callback
#endif

    Serial.println("Draw color bar from top left to bottom right, the order is B - G - R"); 
    lcd->colorBarTest(EXAMPLE_LCD_WIDTH, EXAMPLE_LCD_HEIGHT); // Draw color bar   
    expander->digitalWrite(LCD_BL, HIGH); // Turn on backlight
}
