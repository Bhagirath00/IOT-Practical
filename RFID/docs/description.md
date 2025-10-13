# RFID Reader Project

## Description
This project demonstrates how to interface an RFID (Radio-Frequency Identification) reader module with an Arduino board. RFID technology is commonly used for access control, inventory management, and identification systems in IoT applications.

## Components Required
- Arduino Uno or compatible board
- RFID Reader Module (e.g., MFRC522)
- RFID Tags/Cards
- Jumper wires

## Circuit Diagram
Connect the RFID module to the Arduino as follows:
- SDA (SS) -> Pin 10
- SCK -> Pin 13
- MOSI -> Pin 11
- MISO -> Pin 12
- IRQ -> Not connected
- GND -> GND
- RST -> Pin 9
- 3.3V -> 3.3V

## How It Works
The code initializes the RFID reader and continuously checks for new RFID tags. When a tag is detected, it reads the unique identifier (UID) and prints it to the serial monitor.

## Usage
1. Upload the code to your Arduino board.
2. Open the Serial Monitor in the Arduino IDE.
3. Bring an RFID tag close to the reader.
4. The tag's UID will be displayed in the Serial Monitor.

## Notes
- Ensure the MFRC522 library is installed in your Arduino IDE.
- The RFID module operates at 3.3V, so use the appropriate power pin.
- Different RFID modules may require slight modifications to the code.
