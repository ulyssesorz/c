#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int a, c, i, n = 0;
	int arry[20];

	printf("������һ����:");
	scanf_s("%d",&a);

	c = a;                      //��һ��a���ں������

	while (c)                   //�ж�a�Ǽ�λ��
	{
		c /= 10;
		n++;
	}                   


	for (i = 0; i < n; i++)
	{
		arry[i] = a % 10;
		a /= 10;
	}

	for (i = n-7; i <n-3; i++)
	{
		printf("%d\n", arry[i]);
	}

	system("pause");
	return 0;
}
