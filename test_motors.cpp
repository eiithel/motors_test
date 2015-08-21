// Do not remove the include below
#include "test_motors.h"


void setup() {

	/* Define all 7 pins as outputs to the TB6612FNG driver */
	pinMode(PWMA,OUTPUT);
	pinMode(AIN1,OUTPUT);
	pinMode(AIN2,OUTPUT);
	pinMode(PWMB,OUTPUT);
	pinMode(BIN1,OUTPUT);
	pinMode(BIN2,OUTPUT);

}


void loop() {

	goForward();
	delay(5500);
	turnAround();
	goForward();
	delay(5500);
	turnAround();
	goBackward();
	delay(5500);
	rotateLeft();
	delay(560);
	rotateRight();
	delay(560);
	goForward();
	delay(3000);
	applyBrakes();
	delay(2000);
}

