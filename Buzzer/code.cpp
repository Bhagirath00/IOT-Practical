int buzzerPin = 8; // Define the pin for buzzer

void setup() {
  pinMode(buzzerPin, OUTPUT); // Set buzzer pin as output
}

void loop() {
  tone(buzzerPin, 1000); // Generate 1kHz tone
  delay(1000);            // Wait for 1 second
  noTone(buzzerPin);      // Stop the tone
  delay(1000);            // Wait for 1 second
}
