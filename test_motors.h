// Only modify this file to include
// - function definitions (prototypes)
// - include files
// - extern variable definitions
// In the appropriate section

#ifndef _test_motors_H_
#define _test_motors_H_
#include "Arduino.h"

/* Define pinout of Teensy to match physical connections */

#define PWMA 20
#define AIN1 11
#define AIN2 12
#define PWMB 21
#define BIN1 15
#define BIN2 14
// STBY not defined, always at high state.

void goForward ();
void goBackward ();
void rotateRight ();
void rotateLeft ();
void veerLeft ();
void veerRight ();
void applyBrakes ();
void turnAround();


//add your function definitions for the project test_motors here
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


//Do not add code below this line
#endif /* _test_motors_H_ */
