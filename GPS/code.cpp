// GPS Module Project
// This code demonstrates how to interface with a GPS module (e.g., NEO-6M) using Arduino.
// It reads GPS data and parses latitude, longitude, and other information.

#include <TinyGPS++.h>
#include <SoftwareSerial.h>

// Define pins for GPS module
#define GPS_TX 4
#define GPS_RX 3

TinyGPSPlus gps;
SoftwareSerial gpsSerial(GPS_TX, GPS_RX);

void setup() {
  Serial.begin(9600);
  gpsSerial.begin(9600);
  Serial.println("GPS Module Initialized");
}

void loop() {
  while (gpsSerial.available() > 0) {
    gps.encode(gpsSerial.read());
    if (gps.location.isUpdated()) {
      Serial.print("Latitude: ");
      Serial.println(gps.location.lat(), 6);
      Serial.print("Longitude: ");
      Serial.println(gps.location.lng(), 6);
      Serial.print("Altitude: ");
      Serial.println(gps.altitude.meters());
      Serial.print("Speed: ");
      Serial.println(gps.speed.kmph());
      Serial.println();
    }
  }
}
