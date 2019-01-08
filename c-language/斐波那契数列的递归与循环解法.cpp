#include<stdio.h>
#include<stdlib.h>

int main()
{
	int Fibonacci1(int);
	int Fibonacci2(int);
	int time, i;

	printf("Please enter time:");
	scanf_s("%d", &time);

	for (i = 1; i <= time; i++)
	{
		printf("%d ", Fibonacci1(i));
	}

	printf("\n");
	for (i = 1; i <= time; i++)
	{
		printf("%d ", Fibonacci2(i));
	}

	system("pause");
	return 0;
}
int Fibonacci1(int time)                   //递归解法
{
	if (time == 1 || time == 2)
		return 1;
	else
		return Fibonacci1(time - 1) + Fibonacci1(time - 2);
}

int Fibonacci2(int time)                   //循环解法
{
	int k, i = 1, j = 1, sum = 1;

	for (k = 2; k < time; k++)
	{
		sum = i + j;
		i = j;
		j = sum;
	}
	return sum;
}