/*  
 *  Class: ECE372a
 * 
 *  Group: 209
 *
 *  Lab: 1 Part 3
 * 
 *  File: timer.c
 * 
 *  Member: Michael Harmon (Software)
 *          Abdul Rana (Hardware)
 *          James Beulke (System Integration)
 *          Ali Hassan (Quality Control)
 */

#include <xc.h>
#include "timer.h"

void delayUs(unsigned int delay){
  TMR2 = 0;// Reset Timer Register
  PR2 = delay;// Period Register; Exponents of uS and MHz cancel
  T2CONbits.TCKPS = 3;// Prescaler to 8
  IFS0bits.T2IF = 0;// Interrupt Flag Down
  IPC2bits.T2IP = 7;// Interrupt Priority Default
  T2CONbits.ON = 1;// Start Timer
  while(IFS0bits.T2IF == 0){};// Wait Loop
  IFS0bits.T2IF = 0;
}

