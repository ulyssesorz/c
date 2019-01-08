#include<stdio.h>
#include<stdlib.h>

#define A(x) x;x;x;x;x;x;x;x;x;x;

int main()
{
	int n = 0;

	A(A(A(printf("%d\n", n++))));

	system("pause");
	return 0;
}