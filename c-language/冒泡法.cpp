#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[10];
	int i, j, temp;

	printf("Please enter ten numbers:\n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}

	printf("\n");
	for (j = 0; j < 9; j++)                //注意是9不是10
	{
		for (i = 0; i < 9 - j; i++)
		{
			if (a[i] > a[i + 1])           //注意此处比较i和i+1而不是j，否则会重复打印
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}
	printf("The result after sorting is:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}