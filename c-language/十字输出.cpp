#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j;
	int a[3][3];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("a[%d][%d]=", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == 1 || j == 1)
				printf("%d\t", a[i][j]);
			else
				printf("\t");
		}
		printf("\n");
	}
	system("PAUSE");
}