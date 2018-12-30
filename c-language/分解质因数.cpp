#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i;
	printf("please input a number:\n");
	scanf_s("%d", &n);
	printf("%d=", n);

	for (i = 2; i <= n; i++)
	{
		while (n != i)
		{
			if (n%i == 0)
			{
				printf("%d*", i);
				n = n / i;
			}
			else
				break;
		}
	}
	printf("%d", n);

	system("pause");
	return 0;
}
