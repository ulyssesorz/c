#include<stdio.h>
#include<stdlib.h>

int f(int a)
{
	if (a == 1 || a == 2)
		return 1;
	else
		return f(a - 1) + f(a - 2);
}
int main()
{
	int i, a;
	printf("ÊäÈëÏîÊı£º\n");
	scanf_s("%d", &a);
	for (i = 1; i <= a; i++)
	{
		printf("%d\t", f(i));
	}
	system("PAUSE");
	return 0;
}

