// LED is set to ON when the button is pressed.
const int BUTTON = 2;
const int LED = 3;
int BUTTONstate = 0;

void setup()
{
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  BUTTONstate = digitalRead(BUTTON);
  if (BUTTONstate == HIGH)
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
}

// LED is OFF when button is pressed (Opposite effect)

const int BUTTON = 2;
const int LED = 3;
int BUTTONstate = 0;

void setup()
{
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  BUTTONstate = digitalRead(BUTTON);
  if (BUTTONstate == HIGH)
  {
    digitalWrite(LED, LOW);
  }
  else
  {
    digitalWrite(LED, HIGH);
  }
}