#include<stdio.h>
#include<stdlib.h>

int main()
{
	char a;
	a = getchar();

	if (a & 32)            //32�Ķ�������00100000,�жϵ�������λ�Ƿ�Ϊ��(��д��ĸ)
	{
		a = a & 223;      //223�Ķ�������11011111 ,��a��ΪСд
	}
	else
	{
		a = a | 32;       //��a��Ϊ��д
	}
	getchar();
	printf("%c", a);

	system("pause");
	return 0;
}

