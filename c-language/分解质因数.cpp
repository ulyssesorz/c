#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, i;

	printf("Please enter the number:");
	scanf_s("%d", &num);

	printf("%d=", num);
	for (i = 2; i < num; i++)         //��С����������ҵ�num�ĵ�һ����������С��
	{
		while (num != i)             //���ֱ��num������С����
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
