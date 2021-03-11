

#include "main.h"

// Mr Wright was here
//I dont know if im doing this correctly. -Reuben
//wats up from Nate
// Tommy Was Here t
//This is just a test. You will probably have to change the port numbers.
void operatorControl() {
	while (1) {
		delay(10);
		//drive
		motorSet(2, joystickGetAnalog(2, 2));
		motorSet(9, joystickGetAnalog(2, 2));
		//turn
		motorSet(10, joystickGetAnalog(2, 1));
	}
}
