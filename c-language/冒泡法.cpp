#include<stdio.h>
int main()
{
	int a[10];
	int i, j, temp;
	printf("��������Ҫ�����ʮ������\n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
		printf("\n");
	for (j = 0; j < 9; j++)
	{
		for (i = 0; i < 9 - j; i++)
		{
			if (a[i] > a[i + 1])           //ע��˴��Ƚ�i��i+1������j��������ظ���ӡ
			{
				temp = a[i]; a[i] = a[i + 1]; a[i + 1] = temp;
			}
		}
	}
	printf("������Ϊ��\n");
	for (i = 0; i < 10; i++)
	{
		printf("%3d", a[i]);
	}
	printf("\n");
	getchar();
	getchar();
}