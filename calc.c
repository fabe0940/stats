/* calc.c
 *
 * Mason Fabel                fabe0940@vandals.uidaho.edu
 * CS 121 Section 2 Bolden    g++ (GCC) 4.4.7
 * 03/06                      x86_64 GNU/Linux 
 *
 * Math functions
 *-----------------------------------------------------------------
 */

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "calc.h"
#include "list.h"

/* Find the minimum value */
float calcMin(listNodePtr list) {
	float min;

	if(list == NULL) {
		/* Empty list */
		min = 0.0;
	} else {
		min = (*list).data;

		while(list != NULL) {
			if((*list).data < min) {
				min = (*list).data;
			}

			list = (*list).next;
		}
	}

	return min;
}

/* Find the maximum value */
float calcMax(listNodePtr list) {
	float max;

	if(list == NULL) {
		/* Empty list */
		max = 0.0;
	} else {
		max = (*list).data;

		while(list != NULL) {
			if((*list).data > max) {
				max = (*list).data;
			}

			list = (*list).next;
		}
	}

	return max;
}

/* Find the average value */
float calcMean(listNodePtr list) {
	int num;
	float sum;

	if(list == NULL) {
		/* Empty list */
		num = 1;
		sum = 0.0;
	} else {
		num = 0;
		sum = 0.0;

		while(list != NULL) {
			sum += (*list).data;
			num++;
			list = (*list).next;
		}
	}

	return sum / (float) num;
}

/* Find the standard deviation */
float calcStdDev(listNodePtr list, float mean) {
	int num;
	float sum;

	if(list == NULL || listGetSize(&list) < 2) {
		/* Empty list */
		num = 2;
		sum = 0.0;
	} else {
		num = 0;
		sum = 0.0;

		while(list != NULL) {
			sum += pow((*list).data - mean, 2);
			num++;
			list = (*list).next;
		}
	}

	sum = sum / (float) (num - 1);
	return sqrtf(sum);
}
