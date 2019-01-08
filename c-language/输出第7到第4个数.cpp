#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, temp, i, n = 0;
	int a[20];

	printf("Please enter a number: ");
	scanf_s("%d", &num);
	temp = num;

	while (temp)                  //判断num是几位数
	{
		temp /= 10;
		n++;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = num % 10;
		num /= 10;
	}
	for (i = n - 7; i < n - 3; i++)
	{
		printf("%d", a[i]);
	}

	system("pause");
	return 0;
}
