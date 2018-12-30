#include<stdio.h>
#include<stdlib.h>

int main()
{
	int fun(int, int);
	int num, i;
	int a[10];

	for (i = 0; i < 10; i++)
	{
		printf("请输入a[%d]:", i);
		scanf_s("%d", &a[i]);
	}
	printf("\n\n");

	printf("请输入基数:\n");
	scanf_s("%d", &num);
	printf("\n\n");

	printf("这10个数对应的%d进制数分别是:\n",num);
	for (i = 0; i < 10; i++)
	{
		fun(a[i], num);
		printf("\n");
	}

	system("pause");
}

int fun(int a, int b)
{
	int k = 1;

	if (a == 0)
		k = 0;
	else
	{
		fun(a / b, b);               //递归，当a=0时跳出，开始逐个打印k
		k = a % b;

		if (k < 10)
			printf("%d", k);
		else
			printf("%c", k + 87);    //把大于9的数转化为字母(a的ASCII码是97，即10+87)
	}

	return 0;
}
