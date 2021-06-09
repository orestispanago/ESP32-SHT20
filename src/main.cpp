#include <Arduino.h>
#include "TempRH.h"
#include "utils.h"

TempRH tempRH;

void setup()
{
  Serial.begin(115200);
  // printPins();
}

void loop()
{
  Serial.print(" Temperature: ");
  Serial.print(tempRH.temperature());
  Serial.print(" C\t");
  Serial.print(" Humidity: ");
  Serial.print(tempRH.humidity());
  Serial.print(" %");
  Serial.println();
  delay(1000);
}