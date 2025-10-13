# Bluetooth Communication Project

## Description
This project demonstrates how to interface a Bluetooth module (such as HC-05 or HC-06) with an Arduino board. Bluetooth communication enables wireless data transfer between the Arduino and other devices like smartphones or computers, making it useful for IoT applications requiring remote control or data exchange.

## Components Required
- Arduino Uno or compatible board
- Bluetooth Module (e.g., HC-05)
- Jumper wires

## Circuit Diagram
Connect the Bluetooth module to the Arduino as follows:
- VCC -> 5V
- GND -> GND
- TXD -> Pin 10 (Arduino RX)
- RXD -> Pin 11 (Arduino TX)

## How It Works
The code uses SoftwareSerial to communicate with the Bluetooth module. It forwards data from the Serial Monitor to the Bluetooth module and vice versa, allowing bidirectional communication.

## Usage
1. Upload the code to your Arduino board.
2. Pair the Bluetooth module with your device (default password is often "1234").
3. Open the Serial Monitor in the Arduino IDE.
4. Send data from the Serial Monitor; it will be transmitted via Bluetooth.
5. Data received via Bluetooth will be displayed in the Serial Monitor.

## Notes
- Ensure the SoftwareSerial library is available in your Arduino IDE.
- The Bluetooth module operates at 3.3V logic, but most modules have level shifting built-in.
- For advanced features like AT commands, refer to the module's datasheet.
