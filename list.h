/* list.h 
 *
 * Mason Fabel                fabe0940@vandals.uidaho.edu
 * CS 121 Section 2 Bolden    g++ (GCC) 4.4.7
 * 03/06                      x86_64 GNU/Linux 
 *
 * Linked list function prototypes
 *-----------------------------------------------------------------
 */

#ifndef _LIST_H_
#define _LIST_H_

typedef float listType;

struct _listNode {
	listType data;
	struct _listNode* next;
};

typedef struct _listNode listNode;
typedef listNode* listNodePtr;

void listPrint(listNodePtr* list);
int listGetSize(listNodePtr* list);
void listAddToFront(listNodePtr* list, listType data);
void listAddToBack(listNodePtr* list, listType data);
listType listRemoveFromFront(listNodePtr* list);
listType listRemoveFromBack(listNodePtr* list);

#endif
