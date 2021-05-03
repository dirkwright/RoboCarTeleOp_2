#ifndef _AUTO_H_
#define _AUTO_H_
#include "main.h"
#include "chasis.h"

void wallFollow()
{
    int ultrasonicFrontValue = ultrasonicGet(ultrasonicFront);
    
    if(ultrasonicFrontValue < 20)
    {
        drive(100, 50);
        delay(500);
        drive(100, 0);
    }
}
#endif