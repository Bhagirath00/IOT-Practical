#include <IRremote.h>

int RECV_PIN = 11; // Define the pin for IR receiver

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void loop()
{
  // put your main code here, to run repeatedly:
  if (irrecv.decode(&results))
  {
    Serial.println(results.value, HEX); // Print the received code
    irrecv.resume(); // Receive the next value
  }
}
