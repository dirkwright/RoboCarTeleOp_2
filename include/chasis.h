#ifndef _CHASIS_H_
#define _CHASIS_H_
#include "main.h"

void drive(int power, int turn)
{
    float turnPotRaw = analogReadCalibrated(3);
    float OldRange = 4095.0-2735.0;
    float NewRange = 254.0;
    float turnPot = (((turnPotRaw - 2735.0) * NewRange) / OldRange) - 127.0;
    motorSet(3, power);
    motorSet(8, -power);

    printf("Potentiometer raw: %f, Potentiometer scaled: %f\n", turnPotRaw, turnPot);

    float Kp = 0.6;
    int MAX_OUT = 127;
    float error;
    int output;

    error = turn - turnPot;
    output = Kp * error;
    if (abs(error) < MAX_OUT)
    {
        motorSet(6, output);
    }
    else
    {
        motorSet(6, output / abs(output) * MAX_OUT);
    }
}
#endif
