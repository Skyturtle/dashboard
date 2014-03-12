/*
 * Timer.h
 *
 * Created: 27.02.2012 08:51:53
 *  Author: Morris
 */ 


#ifndef TIMER_H_
#define TIMER_H_

void Timer1_init(U8 prescaler, Bool interruptOverflow);
void Timer3_init(U8 prescaler, Bool interruptOverflow);

void TIMER_Timer1_OCR1A_on(void); // Used as Software-Timebase
void TIMER_Timer1_OCR1B_on(void); // 
void TIMER_Timer1_OCR1C_on(void); // 

void TIMER_Timer3_OCR3A_on(void); // Used as Software-Timebase
void TIMER_Timer3_OCR3B_on(void); //
void TIMER_Timer3_OCR3C_on(void); //

void TIMER_PWM_init(void);
void TIMER_PWM_X37(U16 value);
void TIMER_PWM_X38(U16 value);

#endif /* TIMER_H_ */