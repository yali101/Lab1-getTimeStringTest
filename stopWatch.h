/*  
 *  Class: ECE372a
 * 
 *  Group: 209
 *
 *  Lab: 1 Part 3
 * 
 *  File: stopWatch.h
 * 
 *  Member: Michael Harmon (Software)
 *          Abdul Rana (Hardware)
 *          James Beulke (System Integration)
 *          Ali Hassan (Quality Control)
 */

#ifndef STOPWATCH_H_
#define STOPWATCH_H_

// Initialized Stop Watch
void StopWatch_Init();

// Resets Stop Watch
void StopWatch_Reset();

// Returns a formatted string in the format 'mm:ss:ff'
const char* getTimeString();

#endif // STOPWATCH_H_