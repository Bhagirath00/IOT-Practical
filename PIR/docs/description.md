# PIR Sensor Project

## Project Description
This project demonstrates the use of a PIR (Passive Infrared) sensor to detect motion. When motion is detected, an LED connected to the Arduino will turn on, and a message will be printed to the serial monitor.

## Connections

1. PIR Sensor:
   - VCC to Arduino 5V
   - GND to Arduino GND
   - OUT to Arduino digital pin 2

2. LED:
   - Positive leg (anode) to Arduino digital pin 13
   - Negative leg (cathode) to Arduino GND (through a resistor if needed)

## How it works
- The PIR sensor outputs HIGH when motion is detected.
- The Arduino reads this signal and turns on the LED.
- The serial monitor displays "Motion detected!" or "No motion" accordingly.

## Notes
- Ensure the PIR sensor has a warm-up time (usually a few seconds) before it starts detecting motion.
- Adjust the sensor sensitivity and delay as needed for your application.
