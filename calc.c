#include <math.h>
#include <stdlib.h>
#include "calc.h"
#include "list.h"

float calcMin(listNodePtr list) {
	float min;

	if(list == NULL) {
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

float calcMax(listNodePtr list) {
	float max;

	if(list == NULL) {
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

float calcMean(listNodePtr list) {
	int num;
	float sum;

	if(list == NULL) {
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

float calcStdDev(listNodePtr list, float mean) {
	int num;
	float sum;

	if(list == NULL) {
	} else {
		num = 0;
		sum = 0.0;

		while(list != NULL) {
			sum += pow((*list).data - mean, 2);
			num++;
			list = (*list).next;
		}
	}

	sum = sum / (float) num;
	return sqrtf(sum);
}
