#include<stdio.h>
#include<stdlib.h>

int num;
int *p;

int main()
{
	int *search(int(*pointer)[4], int num);
	int a[][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };    //可看做长度为4的3个数组
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
int *search(int(*pointer)[4], int num)  //(*pointer)[4]相当于二维数组名a
{
	p = *(pointer + num);               //指针指向第num+1个数组	                                  
	return p;
}