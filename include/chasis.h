#ifndef _CHASIS_H_
#define _CHASIS_H_
#include "main.h"

void drive(int power, int turn)
{
    motorSet(3, power);
    motorSet(8, -power);
    motorSet(1, turn);
}

#endif