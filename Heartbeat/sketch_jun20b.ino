#include <SoftwareSerial.h>

SoftwareSerial gpsSerial(10, 11);  // RX, TX pins for GPS module

void setup()
{
  Serial.begin(9600);
  gpsSerial.begin(9600);
}

void loop()
{
  while (gpsSerial.available() > 0)
  {
    {
     
      {
        Serial.print("Time: ");
        Serial.print(":");
        Serial.print(":");
        Serial.print(".");
      }
    }
  }
}
