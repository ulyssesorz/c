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

	printf("Please enter the quantity of numbers you want to swap :\n");
	scanf_s("%d", &n);

	printf("Please enter the number of position you want to move backforwar :\n");
	scanf_s("%d", &m);

	printf("Please enter the number:\n");
	for (i = 0; i < n; i++)
	{
		printf("a[%d]=", i);
		scanf_s("%d", &a[i]);
	}

	output(swap(a));

	system("pause");
	return 0;

}
int * swap(int *a)
{
	int i;
	int b[100], c[100], d[100];     //设置2个临时数组存放数据

	for (i = 0; i < m; i++)
	{
		b[i] = *(a + i);
	}

	for (i = 0; i < n - m; i++)
	{
		c[i] = *(a + i + m);
	}

	for (i = 0; i < n - m; i++)
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