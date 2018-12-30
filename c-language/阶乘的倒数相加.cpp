#include<stdio.h>
int main()
{
	int i, j;
	double sum=0.0,n=1.0,k;
	for (i = 2; i < 9; i = i + 2)
	{
		for (j = 2; j <= i; j++)
		{
			n = n * j;
		}
		k = 1.0 / n;      //此处必须是1.0，否则向下取整k变为0
		sum = sum + k;
		n = 1.0;
	}
	printf("%lf\n", sum);
	getchar();
	return 0;
}