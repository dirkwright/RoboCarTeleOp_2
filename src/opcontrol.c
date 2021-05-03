

#include "main.h"
#include "auto.h"
#include "chasis.h"

// Mr Wright was here
//I dont know if im doing this correctly. -Reuben
//wats up from Nate
// Tommy Was Here today

//This is just a test. You will probably have to change the port numbers.
void operatorControl()
{
	while (1)
	{
		delay(10);
		//printf("%d, %d" , joystickGetAnalog(1, 2), joystickGetAnalog(1, 1));
		//drive
		drive(joystickGetAnalog(1, 2), joystickGetAnalog(1, 1));
		if (joystickGetDigital(1, 8, JOY_UP))
		{
			wallFollow();
		}
	}
}