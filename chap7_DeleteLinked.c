#include <stdio.h>
#include <stdlib.h> 

typedef struct Listnode {
	int data;
	struct Listnode* next;
};
void DeleteLinkedlist(struct Listnode** h, int position)
{
	int k = 1;
	struct Listnode* p, * q;
	if (*h == NULL) {
		printf("Empty Node");
		return 0;
	}
	p = *h;
	if (position == 1)
	{
		*h = p->next;
		free(p);
		return;
	}
	else {
		while ((p != NULL) && (k < position))
		{
			k++;
			q = p;
			p = p->next;
		}
		if (p == NULL)
		{
			printf("position does not exist");
		}
		else {
			q->next = p->next;
			free(p);
		}
	}

}