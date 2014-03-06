#ifndef _LIST_H_
#define _LIST_H_

typedef int listType;

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
