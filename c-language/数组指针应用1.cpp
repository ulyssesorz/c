#include<stdio.h>
#include<stdlib.h>

int num;
int *p;

int main()
{
	int *search(int(*pointer)[4], int num);
	int a[][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };    //�ɿ�������Ϊ4��3������
	int num, i;

	printf("Please enter the number of the student:");
	scanf_s("%d", &num);

	p = search(a, num - 1);

	printf("The scores are: ");
	for (i = 0; i < 4; i++)
	{
		printf("%d ", *(p + i));
	}

	system("pause");
	return 0;
}
int *search(int(*pointer)[4], int num)  //(*pointer)[4]�൱�ڶ�ά������a
{
	p = *(pointer + num);               //ָ��ָ���num+1������	                                  
	return p;
}