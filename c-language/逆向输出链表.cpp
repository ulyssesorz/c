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
		head->next = pt;               //���¿��Ľڵ�head��λ��head��pt����࣬���Խڵ㲻�������ƶ�
		pt = head;
	}
	pt = pt->next;                   //pԭ��ָ���λ�ã���ʱ��p�����ƶ�һλ��ָ�����һ���������
	while (pt != NULL)
	{
		printf("The value is %d\n", pt->data);
		pt = pt->next;              //�ڵ������ƶ�
	}

	system("pause");
	return 0;
}