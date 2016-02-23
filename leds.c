/*  
 *  Class: ECE372a
 * 
 *  Group: 209
 *
 *  Lab: 1 Part 3
 * 
 *  File: leds.c
 * 
 *  Member: Michael Harmon (Software)
 *          Abdul Rana (Hardware)
 *          James Beulke (System Integration)
 *          Ali Hassan (Quality Control)
 */

#include <xc.h>

#define TRISx_OUTPUT 0;

#define LATx_HIGH 1;

#define ODCx_ENABLE 1;

void initLEDs(){
  // Set Tristate Registers as Outputs
  //FOR PRODUCTION:
  TRISGbits.TRISG12 = TRISx_OUTPUT;
  ODCGbits.ODCG12 = ODCx_ENABLE;
  //FOR PRODUCTION:
  TRISGbits.TRISG14 = TRISx_OUTPUT;
  ODCGbits.ODCG14 = ODCx_ENABLE;
}