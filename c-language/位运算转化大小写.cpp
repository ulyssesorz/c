#include<stdio.h>
#include<stdlib.h>

int main()
{
	char a;
	a=getchar();

	if(a & 32)            //32�Ķ�������00100000,�жϵ�������λ�Ƿ�Ϊ��(Сд��ĸ)
	{
		a = a & 223;      //223�Ķ�������11011111 ,��a��Ϊ��д
	}
	else
	{
		a = a | 32;       //��a��ΪСд
	}
	getchar();
	printf("%c", a);

	system("pause");
	return 0;
}

