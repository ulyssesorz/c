#include<stdio.h>
int main()
{
	int a[10];
	int i, j, temp;
	printf("请输入你要排序的十个数：\n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
		printf("\n");
	for (j = 0; j < 9; j++)
	{
		for (i = 0; i < 9 - j; i++)
		{
			if (a[i] > a[i + 1])           //注意此处比较i和i+1而不是j，否则会重复打印
			{
				temp = a[i]; a[i] = a[i + 1]; a[i + 1] = temp;
			}
		}
	}
	printf("排序结果为：\n");
	for (i = 0; i < 10; i++)
	{
		printf("%3d", a[i]);
	}
	printf("\n");
	getchar();
	getchar();
}