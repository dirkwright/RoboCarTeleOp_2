#include "main.h"

// Mr Wright was here
//I dont know if im doing this correctly. -Reuben
//wats up from Nate
// yo i'm here - rohun
//This is just a test. You will probably have to change the port numbers.
void operatorControl() {
	while (1) {
		delay(10);
		printf(joystickGetAnalog(1, 2) + ", " + joystickGetAnalog(1, 1));
		//drive
		motorSet(2, joystickGetAnalog(1, 2));
		motorSet(9, -joystickGetAnalog(1, 2));
		//turn
		motorSet(1, joystickGetAnalog(1, 1));
	}
}
