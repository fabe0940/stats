/* utility.cpp
 *
 * Mason Fabel                fabe0940@vandals.uidaho.edu
 * CS 121 Section 2 Bolden    g++ (GCC) 4.4.7
 * 02/20                      x86_64 GNU/Linux 
 *
 * General, project-independant utility function implementation.
 *-----------------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>

#include "constants.h"
#include "utility.h"

/* Print usage information */
void usage(char* name) {
	printf("Usage: %s <infile> <outfile>\n", name);

	return;
}

/* Print help information */
void help(char* name) {
	usage(name);

	printf("\n");
	printf("Options:\n");
	printf("  -h\tPrint this message and exit\n");
	printf("  -v\tPrint version information and exit\n");
	printf("  -D\tTurn debugging mode on\n");

	return;
}

/* Print version information */
void version(char* name) {
	printf("%s version %i.%i.%i\n", name, VERSION_MAJOR, VERSION_MINOR, VERSION_REV);
	printf("\n");
	printf("Written by Mason Fabel\n");

	return;
}

/* Print an error message and exit */
void error(char* msg) {
	fprintf(stderr, "Error: %s - exiting.\n", msg);

	exit(1);
}

/* Print a message to stdout */
void output(char* msg) {
	printf("%s\n", msg);

	return;
}
