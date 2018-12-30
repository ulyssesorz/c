#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,i;
	int sum=0,tum=0;

	printf("输入数字");
	scanf_s("%d", &a);
	printf("输入次数");
	scanf_s("%d", &b);

	for (i = 0; i < b; i++)
	{
		sum += a;
		tum += sum;
		a *= 10;
	}

	printf("结果是%d", tum);
	system("pause");
}