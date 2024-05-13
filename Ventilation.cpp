#include "Ventilation.h"


void Ventilation::RotateServoPin(int rotateDegrees, int pinNum){
	/*1500 MAX (180 deg)*/
		DDRB |= pinNum;

		TCCR1B |= (1<<WGM13);

		TCCR1A |= (1<<COM1A1) | (1<<WGM11);

		ICR1 = 20000;

		OCR1A = 1000;

		TCCR1B |= ((1<<CS11));
		
	
	OCR1A = rotateDegrees;
}
void Ventilation::SetFanSpeed(int speedPwm, int ddrbRegister){
		DDRB |= speedPwm;

		TCCR1B |= (1<<WGM13);

		TCCR1A |= (1<<COM1A1) | (1<<WGM11);

		ICR1 = 20000;

		OCR1A = 1000;

		TCCR1B |= ((1<<CS11));	
		
		OCR1A = speedPwm;
}