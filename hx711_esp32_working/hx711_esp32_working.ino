
#include "Adafruit_Sensor.h"
#include <HX711.h> // Rob tillart

const int LOADCELL_DOUT_PIN = 16;
const int LOADCELL_SCK_PIN = 4;

HX711 scale;  // Initializes library functions.
int calibration_factor = 114332; // Defines calibration factor we'll use for calibrating.


void setup() 
{
  Serial.begin(115200);   // Starts serial communication in 9600 baud rate.
  delay(1);

  Serial.println("Initializing scale calibration.");  // Prints user commands.
  Serial.println("Please remove all weight from scale.");
  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);  // Initializes the scaling process.
  scale.set_scale();
  scale.tare();          // Resets the scale to 0.
}
 

void loop() 
{
  scale.set_scale(calibration_factor);  // Adjusts the calibration factor.

  float weight = scale.get_units();
  Serial.print("Reading: ");            // Prints weight readings in .2 decimal kg units.
  Serial.print(weight,3);
  Serial.println(" kg");
  scale.power_down();    //
  delay(500);
  scale.power_up();

  delay(2000);  
}
