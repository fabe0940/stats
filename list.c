#include <stdio.h>
#include <stdlib.h>

#include "utility.h"

#include "list.h"

void listPrint(listNodePtr* list) {
	listNodePtr curr;

	curr = *list;

	while(curr != NULL) {
		printf("%f\n", (*curr).data);
		curr = (*curr).next;
	}

	return;
}

int listGetSize(listNodePtr* list) {
	int size = 0;
	listNodePtr curr;

	curr = *list;

	while(curr != NULL) {
		size++;
		curr = (*curr).next;
	}

	return size;
}

void listAddToFront(listNodePtr* list, listType data) {
	listNodePtr temp;

	temp = (listNodePtr) malloc(sizeof(listNode));
	(*temp).data = data;
	(*temp).next = NULL;

	(*temp).next = *list;
	*list = temp;

	return;
}

void listAddToBack(listNodePtr* list, listType data) {
	listNodePtr temp;
	listNodePtr curr;

	temp = (listNodePtr) malloc(sizeof(listNode));
	(*temp).data = data;
	(*temp).next = NULL;

	curr = *list;
	if(curr == NULL) {
		*list = temp;
	} else {
		while((*curr).next != NULL) {
			curr = (*curr).next;
		}

		(*curr).next = temp;
	}

	return;
}

listType listRemoveFromFront(listNodePtr* list) {
	listType result;
	listNodePtr temp;

	if(*list == NULL) {
		error("Cannot remove from an empty list");
	} else {
		temp = *list;
		*list = (**list).next;

		result = (*temp).data;

		free(temp);
	}

	return result;
}

listType listRemoveFromBack(listNodePtr* list) {
	listType result;
	listNodePtr temp;
	listNodePtr curr;

	if(*list == NULL) {
		error("Cannot remove from an empty list");
	} else {
		curr = *list;
		while((*(*curr).next).next != NULL) {
			curr = (*curr).next;
		}

		temp = (*curr).next;
		(*curr).next = NULL;

		result = (*temp).data;

		free(temp);
	}

	return result;
}
