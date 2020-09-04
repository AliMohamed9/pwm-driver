/*
 * timer.h
 *
 *  Created on: Aug 7, 2020
 *      Author: MeGa
 */

#ifndef TIMER_H_
#define TIMER_H_
#include<avr/io.h>
#include<util/delay.h>
 void pwm_init();
 void duty_cycle_size();
 void set_duty_cycle(char size_of_cycle);
 void stop_pwm();
 void start_pwm();



#endif /* TIMER_H_ */
