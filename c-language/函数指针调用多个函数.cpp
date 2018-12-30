#include<stdio.h>
#include<stdlib.h>
int main()
{
	int max(int x,int y);
	int min(int x, int y);
	int sum(int x, int y);
	int pro(int, int, int (*fun)(int, int));

	int a, b;
	scanf_s("%d %d", &a, &b);

	pro(a, b, max);
	pro(a, b, min);
	pro(a, b, sum);
	system("PAUSE");
	return 0;
}

int max(int x, int y)
{
	int  w;

	w = x > y ? x : y;     //比if更为简洁的表示
	return w;
}
int min(int x, int y)
{
	int  w;

	w = x < y ? x : y;
	return w;
}
int sum(int w, int z)
{
	int x;
	x = w + z;
	return x;
}
int pro(int a, int b, int (*fun)(int,int))
{
	int c;
	c = (*fun)(a, b);
	printf("%d\n", c);
	return 1;
}