// Accelerometer Project
// This code demonstrates how to interface with an accelerometer sensor (e.g., ADXL335) using Arduino.
// It reads acceleration values along X, Y, and Z axes and prints them to the serial monitor.

#define X_PIN A0
#define Y_PIN A1
#define Z_PIN A2

void setup() {
  Serial.begin(9600);
  Serial.println("Accelerometer Initialized");
}

void loop() {
  int x = analogRead(X_PIN);
  int y = analogRead(Y_PIN);
  int z = analogRead(Z_PIN);

  // Convert to voltage (assuming 5V reference)
  float xVolt = x * (5.0 / 1023.0);
  float yVolt = y * (5.0 / 1023.0);
  float zVolt = z * (5.0 / 1023.0);

  Serial.print("X: ");
  Serial.print(xVolt);
  Serial.print("V, Y: ");
  Serial.print(yVolt);
  Serial.print("V, Z: ");
  Serial.print(zVolt);
  Serial.println("V");

  delay(500);
}
