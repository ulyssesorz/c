#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,i;
	int sum=0,tum=0;

	printf("��������");
	scanf_s("%d", &a);
	printf("�������");
	scanf_s("%d", &b);

	for (i = 0; i < b; i++)
	{
		sum += a;
		tum += sum;
		a *= 10;
	}

	printf("�����%d", tum);
	system("pause");
}