#include "TempRH.h"
#include <Arduino.h>

TempRH::TempRH()
{
    DFRobot_SHT20 _sht20;
    _init();
}

float TempRH::temperature()
{
    return _sht20.readTemperature();
}
float TempRH::humidity()
{
    return _sht20.readHumidity();
}

void TempRH::_init()
{
    _sht20.initSHT20();
    delay(100);
    _sht20.checkSHT20();
}