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
	for (i = 0; i < length; i++)                  //����Ϊ��λ��ӡ
	{
		for (j = 0; j < (length - i - 1); j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)               //��ӡ��벿��
		{
			printf("%c", temp++);
		}
		for (j = 0; j < i; j++)               //��ӡ�Ұ벿��
		{
			printf("%c", temp--);
		}

		printf("\n");
	}

	system("pause");
	return 0;
}


