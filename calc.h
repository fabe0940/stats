#ifndef _CALC_H_
#define _CALC_H_

#include "list.h"

float calcMin(listNodePtr list);
float calcMax(listNodePtr list);
float calcMean(listNodePtr list);
float calcStdDev(listNodePtr list, float mean);

#endif
