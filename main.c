/*
 * main.c
 *
 *  Created on: Aug 7, 2020
 *      Author: MeGa
 */
#include"timer.h"


void timer_init()
{
	TCCR0|=(1<<6)|(1<<3)|(1<<0); ///set pin 6,3 and 0 (only)  in the register
	    //TCCR0=0b01101001;
	    //TCNT0=0xff;
	    OCR0=127;
#define PWM_INIT_MODULE


}
void duty_cycle_size()
{
	 for(int i=255;i>=0;i--)
	    {
	    	     OCR0=i;
	    		_delay_ms(1000);
	    }

	   /*
	while(1)
	{
		OCR0=50;
		_delay_ms(10000);
		OCR0=100;
		_delay_ms(10000);
		OCR0=150;
		_delay_ms(10000);
	}
	    */
}
void set_duty_cycle(char size_of_cycle)
{
	  OCR0=size_of_cycle;
	  _delay_ms(1000);
}
void stop_pwm()
{
	TCCR0&=~(1<<5);
	TCCR0&=~(1<<4);
	_delay_ms(100);
}
void start_pwm()
{
	TCCR0|=(1<<5);
}
