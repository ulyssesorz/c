#include<stdio.h>
#include<stdlib.h>
int main()
{
	int score[][4] = { 1,2,3,4,5,6,7,8,9,1,2,3 };
	int *search(int(*pointer)[4], int n);
	int *p;
	int i, m,n;

	printf("输入学生的序号：\n");
	scanf_s("%d", &n);
	printf("该学生的成绩是：\n");
                
	p = search(score, n-1);     //原本学生的序号从零开始，此处改为从 1 开始。


	for (i = 0; i < 4; i++)
	{
		printf("%d\t", *(p + i));
	}
	system("PAUSE");
	return 0;
}
int *search(int (*pointer)[4],int m)   //用指针定位到数组的第m行。
{
	int *p;
	p = *(pointer+m);
	return p;
}