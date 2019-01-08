#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j;
	char ch;
	char temp = 'A';

	printf("Please enter an uppercase letter:");
	ch = getchar();

	int length = ch - 'A' + 1;
	for (i = 0; i < length; i++)                  //以行为单位打印
	{
		for (j = 0; j < (length - i - 1); j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)               //打印左半部分
		{
			printf("%c", temp++);
		}
		for (j = 0; j < i; j++)               //打印右半部分
		{
			printf("%c", temp--);
		}

		printf("\n");
	}

	system("pause");
	return 0;
}


