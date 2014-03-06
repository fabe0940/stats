#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(int argc, char** argv) {
	int i;
	listNodePtr head = NULL;

	listPrint(&head);

	for(i = 0; i < 10; i++) {
		listAddToBack(&head, i);
	}
	listPrint(&head);
	putchar('\n');

	for(i = 0; i < 3; i++) {
		printf("%i\n", listRemoveFromFront(&head));
	}
	putchar('\n');

	for(i = 0; i < 3; i++) {
		printf("%i\n", listRemoveFromBack(&head));
	}
	putchar('\n');

	listPrint(&head);
	putchar('\n');

	exit(0);
}
