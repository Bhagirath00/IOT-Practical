#include <Servo.h>

Servo myservo; // Create servo object

void setup() {
  myservo.attach(9); // Attach servo to pin 9
}

void loop() {
  myservo.write(0);   // Move to 0 degrees
  delay(1000);        // Wait 1 second
  myservo.write(180); // Move to 180 degrees
  delay(1000);        // Wait 1 second
}
