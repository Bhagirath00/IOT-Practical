// Bluetooth Communication Project
// This code demonstrates how to interface with a Bluetooth module (e.g., HC-05) using Arduino.
// It allows sending and receiving data via Bluetooth serial communication.

#include <SoftwareSerial.h>

// Define pins for Bluetooth module
#define BT_TX 10
#define BT_RX 11

SoftwareSerial bluetooth(BT_TX, BT_RX); // Create SoftwareSerial instance

void setup() {
  Serial.begin(9600); // Initialize serial communication for debugging
  bluetooth.begin(9600); // Initialize Bluetooth serial communication
  Serial.println("Bluetooth Module Initialized");
}

void loop() {
  // Send data from Serial Monitor to Bluetooth
  if (Serial.available()) {
    char data = Serial.read();
    bluetooth.write(data);
  }

  // Receive data from Bluetooth and print to Serial Monitor
  if (bluetooth.available()) {
    char data = bluetooth.read();
    Serial.write(data);
  }
}
