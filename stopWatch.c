/*  
 *  Class: ECE372a
 * 
 *  Group: 209
 *
 *  Lab: 1 Part 3
 * 
 *  File: stopWatch.c
 * 
 *  Member: Michael Harmon (Software)
 *          Abdul Rana (Hardware)
 *          James Beulke (System Integration)
 *          Ali Hassan (Quality Control)
 */

#include <xc.h>
#include <sys/attribs.h>

volatile unsigned int minutes = 0;
volatile unsigned int seconds = 0;

void StopWatch_Init(){
  TMR1 = 0;
  PR1 = 15200;
  T1CONbits.TCKPS = 3;//Prescaler of 256
  IFS0bits.T1IF = 0;// Flag Down
  IEC0bits.T1IE = 1;// Interrupt Enabled
  IPC1bits.T1IP = 7;// Priority Default
}

void StopWatch_Reset(){
  minutes = 0;
  seconds = 0;
  TMR1 = 0;
}

const char* getTimeString(){
  unsigned int hundredths = TMR1 / 152;
  const char retString[9];
  sprintf(retString,"%02d:%02d:%02d",minutes,seconds,hundredths);
  return retString;
}

void __ISR(_TIMER_1_VECTOR, IPL7SRS) _T1Interrupt(void){
  IFS0bits.T1IF = 0;//Put Flag Down
  if(seconds == 59){
    if(minutes == 59){
      minutes = 0;
    }else{
      minutes++;
    };
    seconds = 0;
  }else{
    seconds++;
  };
}
