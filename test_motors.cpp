// Do not remove the include below
#include "test_motors.h"


/* Define pinout of Teensy to match physical connections */
#define PWMA 20
#define AIN1 11
#define AIN2 12
#define PWMB 21
#define BIN1 15
#define BIN2 14
// STBY not defined, always at high state.

void goForward ()
{
	digitalWrite (AIN1,HIGH);
	digitalWrite (AIN2,LOW);
	analogWrite(PWMA,234);
	digitalWrite (BIN1,HIGH);
	digitalWrite (BIN2,LOW);
	analogWrite(PWMB,255);
}

void goBackward ()
{
	digitalWrite (AIN1,LOW);
	digitalWrite (AIN2,HIGH);
	analogWrite(PWMA,233);
	digitalWrite (BIN1,LOW);
	digitalWrite (BIN2,HIGH);
	analogWrite(PWMB,255);
}

void rotateRight ()
{
	digitalWrite (AIN1,HIGH);
	digitalWrite (AIN2,LOW);
	analogWrite(PWMA,255);
	digitalWrite (BIN1,LOW);
	digitalWrite (BIN2,HIGH);
	analogWrite(PWMB,255);
}

void rotateLeft ()
{
	digitalWrite (AIN1,LOW);
	digitalWrite (AIN2,HIGH);
	analogWrite(PWMA,255);
	digitalWrite (BIN1,HIGH);
	digitalWrite (BIN2,LOW);
	analogWrite(PWMB,255);
}

void veerLeft ()
{
	digitalWrite (AIN1,HIGH);
	digitalWrite (AIN2,LOW);
	analogWrite(PWMA,190);
	digitalWrite (BIN1,HIGH);
	digitalWrite (BIN2,LOW);
	analogWrite(PWMB,255);
}

void veerRight ()
{
	digitalWrite (AIN1,HIGH);
	digitalWrite (AIN2,LOW);
	analogWrite(PWMA,255);
	digitalWrite (BIN1,HIGH);
	digitalWrite (BIN2,LOW);
	analogWrite(PWMB,190);
}

void applyBrakes ()
{
	digitalWrite (AIN1,HIGH);
	digitalWrite (AIN2,HIGH);
	analogWrite(PWMA,255);
	digitalWrite (BIN1,HIGH);
	digitalWrite (BIN2,HIGH);
	analogWrite(PWMB,255);
}


void turnAround()
{
	rotateLeft();
	delay(1370);
}



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

