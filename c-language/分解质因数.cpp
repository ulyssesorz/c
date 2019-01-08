#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, i;

	printf("Please enter the number:");
	scanf_s("%d", &num);

	printf("%d=", num);
	for (i = 2; i < num; i++)         //从小到大检索，找到num的第一个因数（最小）
	{
		while (num != i)             //相除直到num等于最小因数
		{
			if (num%i == 0)
			{
				printf("%d*", i);
				num /= i;
			}
			else
				break;
		}
	}
	printf("%d\n", num);

	system("pause");
	return 0;
}
