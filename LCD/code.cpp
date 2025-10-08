#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // rs, en, d4, d5, d6, d7

void setup()
{
  // put your setup code here, to run once:
  lcd.begin(16, 2); // Initialize the LCD
  lcd.print("Hello, World!"); // Print message
}

void loop()
{
  // put your main code here, to run repeatedly:
  // nothing
}
