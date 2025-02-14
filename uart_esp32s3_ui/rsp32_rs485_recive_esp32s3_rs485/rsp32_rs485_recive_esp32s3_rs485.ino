#include <HardwareSerial.h>
#include "Wire.h"

HardwareSerial SerialPort(2); // UART on GPIO 16 (RX) & 17 (TX)

void setup() {
  Serial.begin(115200);
  SerialPort.begin(115200, SERIAL_8N1, 16, 17); 
  SerialPort.setTimeout(250); // Set timeout for readString()

  Serial.println("RS485 Receiver Initialized");

  Wire.begin();  // Initialize I2C if needed
}

void loop() {
  if (SerialPort.available()) 
  {
    String command = SerialPort.readString();  
    command.trim(); // Remove leading/trailing spaces & newlines

    Serial.print("Received: ");
    Serial.println(command);

    // Check if the received command is "01", "02", or "03"
    if (command == "01" || command == "02" || command == "03") {
      SerialPort.println(command); // Send back the same message
      Serial.print("Sent: ");
      Serial.println(command);
    }
  }
}

// #include <HardwareSerial.h>
// #include "Wire.h"

// HardwareSerial SerialPort(2); // hardware serial  16 17 
// //#define SLAVE_1_ADDR 0x55  // Slave 1 address




// void setup() {
//   Serial.begin(115200);
//   // uart commuinication
//   SerialPort.begin(115200, SERIAL_8N1, 16, 17); 
//   SerialPort.setTimeout(250);
  
//   Serial.println("RS485 Receiver Initialized");
//   delay(50);
//   //Wire.onReceive(onReceive);
//   Wire.begin();  // Act as Slave to Master, Master to Slave 2
// }

// void loop() {
//   if (SerialPort.available()) 
//   {
//     String command = SerialPort.readString();  
//     command.trim();
//     Serial.print("Received: ");
//     Serial.println(command);
//     forwardToSlave2(command);
//   }
//   // No need to do anything, onReceive handles forwarding
// }
