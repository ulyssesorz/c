#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[10][10];
	int i, j;

	for (i = 0; i < 10; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;                                   //��һ�кͶԽ��߶���1
	}
	for (i = 2; i < 10; i++)
	{
		for (j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];    //�ο�������ǵĹ���
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

