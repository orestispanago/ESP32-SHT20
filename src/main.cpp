#include <Arduino.h>
#include <Wire.h>
#include "DFRobot_SHT20.h"

DFRobot_SHT20 sht20;

void printPins()
{
  Serial.println();
  Serial.println("======================");
  Serial.println("Hardware SPI GPIO pins");
  Serial.print("MOSI: \t");
  Serial.println(MOSI);
  Serial.print("MISO: \t");
  Serial.println(MISO);
  Serial.print("SCK: \t");
  Serial.println(SCK);
  Serial.print("SS: \t");
  Serial.println(SS);
  Serial.println("======================");
  Serial.println("Default I2C GPIO pins");
  Serial.print("SDA: \t");
  Serial.println(SDA);
  Serial.print("SCL: \t");
  Serial.println(SCL);
  Serial.println();
}

void setup()
{
  Serial.begin(115200);
  Serial.println("SHT20 Example!");
  // printPins();
  sht20.initSHT20(); // Init SHT20 Sensor
  delay(100);
  sht20.checkSHT20(); // Check SHT20 Sensor
}

void loop()
{
  float humd = sht20.readHumidity();    // Read Humidity
  float temp = sht20.readTemperature(); // Read Temperature
  Serial.print(" Temperature: ");
  Serial.print(temp, 1);
  Serial.print("C\t");
  Serial.print(" Humidity: ");
  Serial.print(humd, 1);
  Serial.print("%");
  Serial.println();
  delay(1000);
}