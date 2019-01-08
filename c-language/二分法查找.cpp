#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, flag = 0;
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int low = 0, middle, high = 9;

	printf("Please enter a number:\n");
	scanf_s("%d", &num);

	while (low <= high)
	{
		middle = (low + high) / 2;

		if (num == a[middle])
		{
			flag = 1;                  //flag是标记—判断标志
			break;
		}
		else if (num > a[middle])
			low++;
		else
			high--;
	}
	if (flag == 1)
	{
		printf("The number you are looking for exists.\n");
		printf("It is the %dth number.\n", middle + 1);
	}
	else
		printf("This number doesn't exist.");

	system("pause");
	return 0;
}