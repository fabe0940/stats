#include <stdio.h>
#include <stdlib.h>
#include "utility.h"

int main(int argc, char** argv) {
	char buff;
	FILE* inf;
	FILE* outf;

	if(argc != 3) {
		usage(argv[0]);
		exit(0);
	}

	inf = fopen(argv[1], "r");
	outf = fopen(argv[2], "w");

	if(inf == NULL) {
		error("unable to open input file.");
	}

	if(outf == NULL) {
		error("unable to open output file.");
	}

	buff = fgetc(inf);
	while(buff != EOF) {
		fputc(buff, outf);
		buff = fgetc(inf);
	}

	exit(0);
}
