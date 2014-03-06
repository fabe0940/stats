#include <stdio.h>
#include <stdlib.h>
#include "utility.h"

/* Print usage information */
void usage(char* name) {
	printf("Usage: %s <infile> <outfile>\n", name);

	return;
}

/* Print an error message and exit */
void error(char* msg) {
	fprintf(stderr, "Error: %s - exiting.\n", msg);

	exit(1);
}
