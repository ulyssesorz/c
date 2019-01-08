#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j;
	float sum = 0, n = 1;

	for (i = 2; i < 9; i += 2)
	{
		for (j = 2; j <= i; j++)      //求阶乘
		{
			n *= j;
		}
		n = 1 / n;                   //倒数相加
		sum += n;
		n = 1;
	}
	printf("%f", sum);

	system("pause");
	return 0;
}