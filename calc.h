/* calc.h
 *
 * Mason Fabel                fabe0940@vandals.uidaho.edu
 * CS 121 Section 2 Bolden    g++ (GCC) 4.4.7
 * 03/06                      x86_64 GNU/Linux 
 *
 * Math function prototypes
 *-----------------------------------------------------------------
 */

#ifndef _CALC_H_
#define _CALC_H_

#include "list.h"

float calcMin(listNodePtr list);
float calcMax(listNodePtr list);
float calcMean(listNodePtr list);
float calcStdDev(listNodePtr list, float mean);

#endif
