#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#include "list.h"
#include "utility.h"

int main(int argc, char** argv) {
	float buff;
	float min;
	float max;
	float mean;
	float stddev;
	FILE* fin;
	FILE* fout;
	listNodePtr head;

	/* Initialize variables */
	buff = 0.0;
	min = 0.0;
	max = 0.0;
	mean = 0.0;
	stddev = 0.0;
	fin = NULL;
	fout = NULL;
	head = NULL;

	/* Check for the proper arguments */
	if(argc != 3) {
		usage(argv[0]);
		exit(0);
	}

	/* Open the requested files */
	fin = fopen(argv[1], "r");
	fout = fopen(argv[2], "w");

	/* Check for file opening errors */
	if(fin == NULL) {
		error("unable to open input file.");
	}

	if(fout == NULL) {
		error("unable to open output file.");
	}

	/* Read data from fin into the list */
	while(fscanf(fin, "%f\n", &buff) != EOF) {
		listAddToBack(&head, buff);
	}

	/* Process list */
	min = calcMin(head);
	max = calcMax(head);
	mean = calcMean(head);
	stddev = calcStdDev(head, mean);

	/* Print output */
	printf("Statistics Calculator v.%i.%i.%i by Mason Fabel\n", 0, 0, 0);
	printf("  minimum: %f\n", min);
	printf("  maximum: %f\n", max);
	printf("  mean: %f\n", mean);
	printf("  standard deviation: %f\n", stddev);

	/* Close open files */
	fclose(fin);
	fclose(fout);

	exit(0);
}
