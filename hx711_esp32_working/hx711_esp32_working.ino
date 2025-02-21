#include <HX711.h>

// Load cell 1
const int LOADCELL1_DOUT_PIN = 16;
const int LOADCELL1_SCK_PIN = 4;

// Load cell 2
const int LOADCELL2_DOUT_PIN = 17;
const int LOADCELL2_SCK_PIN = 2;

// float RL = 20;
float weight1 = 0.00;
float weight2 = 0.00;


HX711 scale1;  // Initializes library functions.
HX711 scale2;

int calibration_factor1 = 256500; // Defines calibration factor we'll use for calibrating.
int calibration_factor2 = 253800;


// float calculateResistance(int analogValue) {
//   // Calculate the sensor resistance (RS) based on the analog value
//   return ((1023.0 * RL) / analogValue) - RL;
// }

void setup() 
{
  Serial.begin(115200);   // Starts serial communication in 9600 baud rate.
  delay(10);
  Serial.println("Initializing scale calibration.");  // Prints user commands.
  Serial.println("Please remove all weight from scale.");

  scale1.begin(LOADCELL1_DOUT_PIN, LOADCELL1_SCK_PIN);  // Initializes the scaling process.
  delay(5);
  scale2.begin(LOADCELL2_DOUT_PIN, LOADCELL2_SCK_PIN);

  scale1.set_scale();
  scale1.tare();          // Resets the scale to 0.
  delay(5);

  scale2.set_scale();
  scale2.tare();
}
 

void loop() {
  
  scale1.set_scale(calibration_factor1);
  scale2.set_scale(calibration_factor2);

  weight1 = scale1.get_units();
  weight2 = scale2.get_units();

  Serial.print("Readings : \n");

  Serial.print("Load cell 1: ");            // Prints weight readings in .2 decimal kg units.
  Serial.print(weight1,3);
  Serial.println(" kg");

  Serial.print("Load cell 2: ");            // Prints weight readings in .2 decimal kg units.
  Serial.print(weight2,3);
  Serial.println(" kg");

  delay(200);
  
  scale1.power_down();
  scale2.power_down();
  delay(500);

  scale1.power_up();
  scale2.power_up();
  delay(500);
}

