#include<stdio.h>
#include<stdlib.h>

int main()
{
	int fun(int, int);
	int num, i;
	int a[10];

	for (i = 0; i < 10; i++)
	{
		printf("������a[%d]:", i);
		scanf_s("%d", &a[i]);
	}
	printf("\n\n");

	printf("���������:\n");
	scanf_s("%d", &num);
	printf("\n\n");

	printf("��10������Ӧ��%d�������ֱ���:\n",num);
	for (i = 0; i < 10; i++)
	{
		fun(a[i], num);
		printf("\n");
	}

	system("pause");
}

int fun(int a, int b)
{
	int k = 1;

	if (a == 0)
		k = 0;
	else
	{
		fun(a / b, b);               //�ݹ飬��a=0ʱ��������ʼ�����ӡk
		k = a % b;

		if (k < 10)
			printf("%d", k);
		else
			printf("%c", k + 87);    //�Ѵ���9����ת��Ϊ��ĸ(a��ASCII����97����10+87)
	}

	return 0;
}
