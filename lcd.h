/*  
 *  Class: ECE372a
 * 
 *  Group: 209
 * 
 *  Lab: 1 Part 3
 *
 *  File: lcd.h
 * 
 *  Member: Michael Harmon (Software)
 *          Abdul Rana (Hardware)
 *          James Beulke (System Integration)
 *          Ali Hassan (Quality Control)
 * 
 *  
 */

#ifndef LCD_H_
#define LCD_H_

//Used by other LCD_* functions to write to the LCD Screen
void LCD_Write(unsigned char word, unsigned int commandType, unsigned int delayAfter);

//Initializes the LCD Screen
void LCD_Init(void);

//Clears the LCD Screen
void LCD_Clear(void);

//Moves the Cursor to the given position
//  x is the horizontal (starting from 1)
//  y is the line (1 is the top line, 2 is the bottom line)
void LCD_MoveCursor(unsigned char x, unsigned char y);

//Prints a single Character on the LCD in the current cursor position
void LCD_PrintChar(char c);

//Prints a String on the LCD at the current cursor position
void LCD_PrintString(const char* s);

#endif // LCD_H_