

#include "main.h"

<<<<<<< HEAD
// Mr Wright was Here :)

=======
/*
 * Runs the user operator control code. This function will be started in its own task with the
 * default priority and stack size whenever the robot is enabled via the Field Management System
 * or the VEX Competition Switch in the operator control mode. If the robot is disabled or
 * communications is lost, the operator control task will be stopped by the kernel. Re-enabling
 * the robot will restart the task, not resume it from where it left off.
 *
 * If no VEX Competition Switch or Field Management system is plugged in, the VEX Cortex will
 * run the operator control task. Be warned that this will also occur if the VEX Cortex is
 * tethered directly to a computer via the USB A to A cable without any VEX Joystick attached.
 *
 * Code running in this task can take almost any action, as the VEX Joystick is available and
 * the scheduler is operational. However, proper use of delay() or taskDelayUntil() is highly
 * recommended to give other tasks (including system tasks such as updating LCDs) time to run.
 *
 * This task should never exit; it should end with some kind of infinite loop, even if empty.
 */
//I dont know if im doing this correctly. -Reuben
<<<<<<< HEAD
>>>>>>> 44cbf9f77849fe944f066eaba02b3c1559e0bf89
=======
// Wassup everybody. -Nate
>>>>>>> cc7aa9a6bf0849cc9355703f2bb2f3ff850d7e10
void operatorControl() {
	while (1) {
		printf("Hello PROS User!\n");
		delay(20);
	}
}
