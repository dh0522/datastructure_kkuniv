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
	*h = NULL;//ȣ���� �Լ��� ��¥ head��� �����Ϳ� ���� �ֱ����ؼ�
}