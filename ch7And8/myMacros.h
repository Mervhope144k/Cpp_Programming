// -----------------------------------------
// myMacros.h
// Header file contains the macros
// ABS, MIN, MAX, CLS, LOCATE, COLOR, NORMAL, INVERS
// and symbolic constants for colors
// ------------------------------------------
#ifndef _MYMACROS_
#define _MYMACROS_

#include <iostream>
using namespace std;

// -----------------------------------
// MACRO ABS
// Call : ABS(val)
// Return the absolute value of val
#define ABS(a) ((a) >= 0 ? (a) : -(a))

// -----------------------------------
// MACRO MIN
// Call: MIN(x,y)
// Returns the minimum of x and y
#define MIN(a,b) ((a) <= (b) ? (a) : (b))

// ------------------------------------
// Macro MAX
// Call: MAX(x,y)
// Returns the maximum of x and y
#define MAX(a,b) ((a) >= (b) ? (a) : (b))

// ------------------------------------
// Macros for controlling the screen
// -----------------------------------
// Macro CLS
// Call: CLS;
// Clears the screen
#define CLS (cout << "\033[2J")

// ------------------------------------
// Macro LOCATE
// Call: LOCATE(row,column)
// Positions the cursor to (row,column)
// (1,1) is the upper left corner
#define LOCATE(r,c) (cout << "\033[" << (r) << ';' << (c) << 'H')

// ------------------------------------
// Macro COLOR
// Call: COLOR(foreground,background);
// Sets the foreground and background color
// for the following output
#define COLOR(f,b) (cout << "\033[1;3" << (f)\
		         << ";4" << (b) << 'm' << flush)
// 1: Light foreground 
// 3x: foreground x
// 4x: background x
// Color values for the macro COLOR
// To call ex. : COLOR(WHITE,BLUE);

// -------------------------------------
// Macro INVERS
// Call : INVERS;
// The following output is inverted
#define INVERS (cout << "\033[7m")

// -------------------------------------
// Macro NORMAL
// Call: NORMAL;
// Set the screen attributes on default values
#define NORMAL (cout << "\033[0m")

#endif //_MYMACROS_
