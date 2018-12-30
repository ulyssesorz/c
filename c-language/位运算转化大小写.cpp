#include<stdio.h>
#include<stdlib.h>

int main()
{
	char a;
	a=getchar();

	if(a & 32)            //32的二进制是00100000,判断倒数第三位是否为零(小写字母)
	{
		a = a & 223;      //223的二进制是11011111 ,把a变为大写
	}
	else
	{
		a = a | 32;       //把a变为小写
	}
	getchar();
	printf("%c", a);

	system("pause");
	return 0;
}

