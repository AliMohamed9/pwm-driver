/*
 * timer.c
 *
 *  Created on: Aug 7, 2020
 *      Author: MeGa
 */
#include<avr/io.h>
#include<util/delay.h>

int main()
{

	DDRB=0B00001000;
	DDRD=0Xf0;
	PORTD=0xff;
	while(1)



	 timer_init();
	  start_pwm();
	 duty_cycle_size();
	 stop_pwm();

	 _delay_ms(1000);
#ifndef  PWM_INIT_MODULE

    #error  PWM_NOT_DEFINED

#endif






return 0;
}

