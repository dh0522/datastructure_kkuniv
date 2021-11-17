#include <stdio.h>
#include <stdlib.h>
typedef struct Listnode {
	int data;
	struct Listnode* next;
};
void DeleteLinkedlist(struct Listnode** h) {
	struct Listnode* auxilaryNode, * iterator;
	iterator = *h;
	while (iterator)
	{
		auxilaryNode = iterator->next;
		free(iterator);
		iterator = auxilaryNode;
	}
	*h = NULL;//호출한 함수의 진짜 head노드 포인터에 영향 주기위해서
}