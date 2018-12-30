/* 有n个整数，使前m个移动到后面，后n-m个移动到前面*/

#include<stdio.h>
#include<stdlib.h>

int a[100];
int n, m;

int main()
{
	int i;
	void output(int *);
	int * swap(int *);

	printf("输入整数的个数n:\n");
	scanf_s("%d", &n);

	printf("输入后移的位置数m:\n");
	scanf_s("%d", &m);

	printf("输入这些数:\n");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}


	output(swap(a));

	system("pause");
	return 0;

}
int * swap(int *a)
{
	int i;
	int b[100], c[100],d[100];

	for (i = 0; i < m; i++)
	{
		b[i] = *(a + i);
	}

	for (i = 0; i < n-m; i++)
	{
		c[i] = *(a + i + m);
	}

	for (i = 0; i < n-m; i++)
	{
		d[i] = c[i];
	}

	for (i = 0; i < m; i++)
	{
		d[i + n - m] = b[i];
	}
	return d;
}
void output(int *d)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		printf("%d\t", *(d + i));
	}
}