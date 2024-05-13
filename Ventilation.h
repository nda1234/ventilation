#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#pragma once
#ifndef F_CPU
#define F_CPU 16E6
#endif

#ifndef VENTILATION_H
#define VENTILATION_H
#endif
class Ventilation{
	
	
	public:
	void SetFanSpeed(int speedPwm, int ddrbRegister);	
	void RotateServoPin(int rotateDegrees, int pinNum);	
};