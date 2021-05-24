#ifndef _CHASIS_H_
#define _CHASIS_H_
#include "main.h"

void drive(int power, int turn)
{
    int turnPotRaw = analogReadCalibrated(3);
    int turnPot = (((turnPotRaw - 2825) * (2)) / (4090 - 2825)) - 1;
    motorSet(3, power);
    motorSet(8, -power);
    if (turnPotRaw <= 2825)
    {
        motorSet(6, 20);
    }
    else if (turnPotRaw >= 4090)
    {
        motorSet(6, -20);
    }
    else
    {
        motorSet(6, turn);
    }
    
    //printf("Potentiometer: %d\n", turnPot);
}

#endif