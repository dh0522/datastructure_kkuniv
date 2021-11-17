#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
	int data;
	struct ListNode* next;
};


void InsertinLinkedList(struct ListNode** h, int data, int position)
{
	int k = 1;
	struct ListNode* p, * q, * newNode;
	newNode = malloc(sizeof(struct ListNode));
	if (!newNode)
	{
		printf("Memory Error");
		return 0;
	}
	newNode->data = data;
	p = *h;
	if (position == 1) {
		newNode->next = p;
		*h = newNode;
	}
	else {
		while ((p != NULL) && (k < position))
		{
			k++;
			q = p;
			p = p->next;
			if (p == NULL) {//�� �������� ����
				q->next = newNode;
				newNode->next = NULL;
			}
			else {//�߰��� ����
				newNode->next = q->next;
				q->next = newNode;

			}
		}
	}
}
