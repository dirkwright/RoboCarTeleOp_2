#ifndef _AUTO_H_
#define _AUTO_H_
#include "main.h"
#include "chasis.h"

int autoSpeed = 50;
int autoSpeedTurn = 80;
void wallFollow()
{
    int ultrasonicFrontValue = ultrasonicGet(ultrasonicFront);
    printf("following a wall, distnce at %d", ultrasonicFrontValue);

    drive(autoSpeed, 0);
    if (ultrasonicFrontValue < 20 && ultrasonicFrontValue > 1)
    {
        drive(autoSpeed, autoSpeedTurn);
        delay(100);
        drive(autoSpeed, 0);
        delay(600);
        drive(autoSpeed, -autoSpeedTurn);
        delay(100);
        drive(autoSpeed, 0);
        delay(100);
    }
}
void lineFollow()
{
    int lineRight = analogReadCalibrated(1);
    int lineLeft = analogReadCalibrated(2);
    printf("Lineleft: %d and Lineright: %d\n", lineLeft, lineRight);
    if (lineLeft > 2100)
    {
        print("going right");
        drive(autoSpeed, autoSpeedTurn);
        delay(100);
        drive(autoSpeed, 0);
        delay(1000);
        drive(autoSpeed, -autoSpeedTurn);
        delay(100);
        drive(autoSpeed, 0);
        delay(100);
    }
    else if (lineRight > 2100)
    {
        print("going left");
        drive(autoSpeed, -autoSpeedTurn);
        delay(100);
        drive(autoSpeed, 0);
        delay(1000);
        drive(autoSpeed, autoSpeedTurn);
        delay(100);
        drive(autoSpeed, 0);
        delay(100);
    }
    else
    {
        drive(autoSpeed, 0);
    }
}
#endif
