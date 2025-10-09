#include <Arduino.h>

int pirPin = 2; // PIR sensor output pin
int ledPin = 13; // LED pin for indication

void setup() {
  pinMode(pirPin, INPUT); // Set PIR pin as input
  pinMode(ledPin, OUTPUT); // Set LED pin as output
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int motionDetected = digitalRead(pirPin); // Read PIR sensor

  if (motionDetected == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn on LED
    Serial.println("Motion detected!");
  } else {
    digitalWrite(ledPin, LOW); // Turn off LED
    Serial.println("No motion");
  }

  delay(1000); // Wait for 1 second
}
