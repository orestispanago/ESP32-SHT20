#ifndef TempRH_h
#define TempRH_h
#include <Wire.h>
#include "DFRobot_SHT20.h"

class TempRH
{
public:
    TempRH();
    float temperature();
    float humidity();

private:
    DFRobot_SHT20 _sht20;
    void _init();
};

#endif