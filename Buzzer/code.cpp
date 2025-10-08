int buzzerPin = 8; // Define the pin for buzzer

void setup()
{
  // put your setup code here, to run once:
  pinMode(buzzerPin, OUTPUT); // Define the buzzerPin as output pin
}

void loop()
{
  // put your main code here, to run repeatedly:
  tone(buzzerPin, 1000); // Sends 1kHz tone
  delay(1000);                  // Waits for 1 second
  noTone(buzzerPin);  // Stops the tone
  delay(1000);                  // Waits for 1 second
}
