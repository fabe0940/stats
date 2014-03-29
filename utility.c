/* utility.c
 *
 * Mason Fabel                fabe0940@vandals.uidaho.edu
 * CS 121 Section 2 Bolden    g++ (GCC) 4.4.7
 * 03/06                      x86_64 GNU/Linux 
 *
 * General purpose helper functions
 *-----------------------------------------------------------------
 */

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
