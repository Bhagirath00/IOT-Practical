int motorPin = 9; // Define the pin for motor

void setup()
{
  // put your setup code here, to run once:
  pinMode(motorPin, OUTPUT); // Define the motorPin as output pin
}

void loop()
{
  // put your main code here, to run repeatedly:
  analogWrite(motorPin, 128); // Run motor at half speed
  delay(2000);                  // Wait for 2 seconds
  analogWrite(motorPin, 0);   // Stop the motor
  delay(2000);                  // Wait for 2 seconds
}
