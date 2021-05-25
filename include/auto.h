#ifndef _AUTO_H_
#define _AUTO_H_
#include "main.h"
#include "chasis.h"

int autoSpeed = 50;
int autoSpeedTurn = 120;
int centerOffset = 20;
void autoRoutine()
{
    int ultrasonicFrontValue = ultrasonicGet(ultrasonicFront);
    //printf("following a wall, distnce at %d", ultrasonicFrontValue);
    int lineRight = analogReadCalibrated(1);
    int lineLeft = analogReadCalibrated(2);
    printf("Lineleft: %d and Lineright: %d\n", lineLeft, lineRight);
    drive(autoSpeed, 0);
    if (ultrasonicFrontValue < 20 && ultrasonicFrontValue > 1) //wallFollow
    {
        print("avoiding a wall");
        drive(autoSpeed, autoSpeedTurn);
        delay(100);
        drive(autoSpeed, centerOffset);
        delay(2000);
        drive(autoSpeed, -autoSpeedTurn);
        delay(100);
        drive(autoSpeed, centerOffset);
        delay(100);
    }
    else if (lineLeft > 2000) //LineFollow
    {
        print("going right");
        drive(autoSpeed, autoSpeedTurn);
        delay(100);
        drive(autoSpeed, centerOffset);
        delay(2000);
        drive(autoSpeed, -autoSpeedTurn);
        delay(100);
        drive(autoSpeed, centerOffset);
        delay(100);
    }
    else if (lineRight > 2100)
    {
        print("going left");
        drive(autoSpeed, -autoSpeedTurn);
        delay(100);
        drive(autoSpeed, centerOffset);
        delay(2000);
        drive(autoSpeed, autoSpeedTurn);
        delay(100);
        drive(autoSpeed, centerOffset);
        delay(100);
    }
    else
    {
        drive(autoSpeed, centerOffset);
    }
}
#endif
