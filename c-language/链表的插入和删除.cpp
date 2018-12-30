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
	struct student *del(struct student *head, int num); //num����Ҫ��ɾ���Ľڵ��num
	struct student *insert(struct student *head, struct student *stu2);  //��һ���β�����Ҫ���������
																		//�ڶ����β��Ǵ�����Ľṹ�ĵ�ַ
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
			head = p1;                               //��һ�ΰ�p1��Ϊͷָ��
		else
			p2->next = p1;                          //�ڶ��ο�ʼ�����ݴ浽next֮�У�����һ�ε�������head�У�

		p2 = p1;
		p1 = (struct student *)malloc(LEN);           //�����½ڵ�

		printf("please enter the num:");             //p1���������ݣ����һ�ν��գ�0�������������
		scanf_s("%d", &p1->num);
		printf("please enter the score:");
		scanf_s("%d", &p1->score);      
	}
	p2->next = NULL;                                
	return head;                                     //���������ͷ��㣬�൱�ڷ�����������
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
			p = p->next;                       //��ӡ�������p������һ������
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
		p2 = p1;                             //p2���Ǹ���p1����
		p1 = p1->next;                       //p1������һ������
	}
	if (num == p1->num)
	{
		if (p1 == head)
			head = p1->next;                   //���p1��ͷ��㣬ɾ��֮
		else                        
			p2->next = p1->next;               /*���p1����ͷ��㣬��p1����һ�����ݸ���p2����һ������(��p1����Ϊp2���Ǹ���p1����)
		                                          �൱�ڸ����˵�ǰp1�����ݣ�ֱ�Ӱ�p2����p1�����Ǹ�����*/
		printf("\ndelete %d succed\n", num);
		n -= 1;                                //n������¼�������Ŀ
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
	p0 = stu2;                //p0�Ǵ�����Ľڵ�
	p2 = NULL;
	if (NULL == head)
	{
		head = p0;
		p0->next = NULL;      //����������p0����
	}
	else
	{
		while ((p0->num > p1->num) && (p1->next != NULL))    
		{
			p2 = p1;
			p1 = p1->next;                  //p1��p2���Ϻ��ƣ�ֱ��p0�����<=p1�ģ���p1������β�ڵ�
		}
		if (p0->num <= p1->num)
		{
			if (head == p1)                //p1��ͷ��㣬���԰�p0��Ϊͷ���
				head = p0;
			else                           //p1���м�ڵ㣬��p0����ԭ��p1��λ��
				p2->next = p0;            
			p0->next = p1;                 //��p1����p0�ĺ��棬��ǰ�����ĺ�������
		}
		else
		{
			p1->next = p0;                    //p1��β�ڵ㣬��p0����δ��<=p1�����԰�p0��Ϊβ�ڵ�
			p0->next = NULL;
		}
	}
	n += 1;                               //����һ�Σ��ڵ�����1
	return head;
}



