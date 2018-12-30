#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define LEN sizeof(struct student)
int n;

struct student
{
	int num;
	int score;
	struct student *next;
};

int main()
{
	int print(struct student *head);
	struct student *creat();
	struct student *del(struct student *head, int num); //num是需要被删除的节点的num
	struct student *insert(struct student *head, struct student *stu2);  //第一个形参是需要插入的链表
																		//第二个形参是待插入的结构的地址
	struct student *stu, *p, stu2;
	int n;

	stu = creat();
	p = stu;
	print(p);

	printf("enter the delete number\n");
	scanf_s("%d", &n);
	print(del(p, n));

	printf("input the num to insert\n");
	scanf_s("%d", &stu2.num);
	printf("input the score\n");
	scanf_s("%d", &stu2.score);

	p = insert(stu, &stu2);
	print(p);

	printf("\n\n");
	system("pause");
	return 0;
}
struct student *creat()
{
	struct student *head;
	struct student *p1, *p2;

	p1 = p2 = (struct student *)malloc(LEN);

	printf("please enter the num:");
	scanf_s("%d", &p1->num);
	printf("please enter the score:");
	scanf_s("%d", &p1->score);

	head = NULL;
	n = 0;

	while (p1->num)
	{
		n++;
		if (1 == n)
			head = p1;                               //第一次把p1作为头指针
		else
			p2->next = p1;                          //第二次开始把数据存到next之中，（第一次的数据在head中）

		p2 = p1;
		p1 = (struct student *)malloc(LEN);           //创建新节点

		printf("please enter the num:");             //p1接收新数据，最后一次接收（0）不会接入链表
		scanf_s("%d", &p1->num);
		printf("please enter the score:");
		scanf_s("%d", &p1->score);      
	}
	p2->next = NULL;                                
	return head;                                     //返回链表的头结点，相当于返回整个链表
}
int print(struct student *head)
{
	struct student *p;
	printf("\nThere are %d records\n\n", n);

	p = head;
	if (head != NULL)
	{
		do
		{
			printf("%d %d\n", p->num, p->score);
			p = p->next;                       //打印完后再让p移向下一个数据
		} while (p != NULL);
	}
	return 1;
}
struct student *del(struct student *head, int num)
{
	struct student *p1, *p2;

	if (NULL == head)
	{
		printf("\nThis ilist is null\n");
		goto end;
	}
	p1 = head;
	p2 = NULL;
	while (p1->num != num && p1->next != NULL)
	{
		p2 = p1;                             //p2总是跟在p1后面
		p1 = p1->next;                       //p1移向下一个数据
	}
	if (num == p1->num)
	{
		if (p1 == head)
			head = p1->next;                   //如果p1是头结点，删除之
		else                        
			p2->next = p1->next;               /*如果p1不是头结点，把p1的下一个数据赋给p2的下一个数据(即p1，因为p2总是跟在p1后面)
		                                          相当于覆盖了当前p1的数据，直接把p2连接p1后面那个数据*/
		printf("\ndelete %d succed\n", num);
		n -= 1;                                //n用来记录链表的数目
	}
	else
	{
		printf("%d not been founed\n", num);
	}
end:return head;
}
struct student *insert(struct student *head, struct student *stu2)
{
	struct student *p0, *p1, *p2;

	p1 = head;
	p0 = stu2;                //p0是待插入的节点
	p2 = NULL;
	if (NULL == head)
	{
		head = p0;
		p0->next = NULL;      //空链表，插入p0即可
	}
	else
	{
		while ((p0->num > p1->num) && (p1->next != NULL))    
		{
			p2 = p1;
			p1 = p1->next;                  //p1、p2不断后移，直到p0的序号<=p1的，且p1不能是尾节点
		}
		if (p0->num <= p1->num)
		{
			if (head == p1)                //p1是头结点，所以把p0作为头结点
				head = p0;
			else                           //p1是中间节点，让p0接替原来p1的位置
				p2->next = p0;            
			p0->next = p1;                 //把p1放在p0的后面，是前两步的后续操作
		}
		else
		{
			p1->next = p0;                    //p1是尾节点，且p0还是未能<=p1，所以把p0作为尾节点
			p0->next = NULL;
		}
	}
	n += 1;                               //插入一次，节点数加1
	return head;
}



