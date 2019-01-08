#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[10][10];
	int i, j;

	for (i = 0; i < 10; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;                                   //第一列和对角线都是1
	}
	for (i = 2; i < 10; i++)
	{
		for (j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];    //参看杨辉三角的规律
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}

