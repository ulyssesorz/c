#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, m, i;
	int sum = 0, tum = 0;
	printf("Please enter n:\n");
	scanf_s("%d", &n);

	printf("Please enter m:\n");
	scanf_s("%d", &m);

	for (i = 0; i < m; i++)
	{
		tum += n;         //tum用于计算每一项nn..
		n *= 10;
		sum += tum;      //sum用于计算每个tum的和
	}
	printf("The result is %d.", sum);

	system("pause");
	return 0;
}