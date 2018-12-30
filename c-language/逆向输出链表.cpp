#include<stdio.h>
#include<stdlib.h>

struct list
{
	int data;
	struct list *next;
};

int main()
{
	struct list *pt, *head, *tail;
	int i;

	tail = (struct list *)malloc(sizeof(struct list));
	tail->next = NULL;
	pt = tail;

	printf("please enter 5 data:\n");

	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &pt->data);
		head = (struct list *)malloc(sizeof(struct list));
		head->next = pt;               //给新开的节点head定位，head在pt的左侧，所以节点不断向左移动
		pt = head;
	}
	pt = pt->next;                   //p原本指向空位置，此时让p向右移动一位，指向最后一个输入的数
	while (pt != NULL)
	{
		printf("The value is %d\n", pt->data);
		pt = pt->next;              //节点向右移动
	}

	system("pause");
	return 0;
}