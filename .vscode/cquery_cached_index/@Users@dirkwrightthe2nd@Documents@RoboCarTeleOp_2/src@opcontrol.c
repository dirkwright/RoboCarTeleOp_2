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
		//printf("Ultrasonic: %d\n", ultrasonicGet(ultrasonicFront));
		if (joystickGetDigital(1, 8, JOY_UP))
		{
			autoRoutine();
		}
		else
		{
			drive(joystickGetAnalog(1, 2), joystickGetAnalog(1, 1));
		}
<<<<<<< HEAD
		printf("this is working \n");
=======
>>>>>>> e78c412045ef17baa27f66fb1d25a240a3b40772
	}
}