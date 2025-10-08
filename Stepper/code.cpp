#include <Stepper.h>

const int stepsPerRevolution = 200; // Number of steps per revolution

Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11); // Pins for stepper

void setup()
{
  // put your setup code here, to run once:
  myStepper.setSpeed(60); // Set speed to 60 RPM
}

void loop()
{
  // put your main code here, to run repeatedly:
  myStepper.step(stepsPerRevolution); // Step one revolution
  delay(1000);                        // Wait for 1 second
}
