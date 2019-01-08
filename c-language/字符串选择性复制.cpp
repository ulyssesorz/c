#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>

int begin, end;                            //从begin复制到end
char str1[100], str2[100];

int main()
{
	char *strcopy(char *);
	int k;
	char *p;

	printf("Please enter the location of begin: ");
	scanf_s("%d", &begin);

	printf("Please enter the location of end: ");
	scanf_s("%d", &end);

	printf("Please enter string: ");
	scanf_s("%s", str1, 100);

	p = strcopy(str1);

	for (k = 0; k < end - begin + 1; k++)
	{
		printf("%c", *(p++));
	}

	system("pause");
	return 0;
}
char *strcopy(char *str1)
{
	int i = 0;
	int j = begin - 1;           //j控制复制的次数
	str1 = str1 + j;             //把指针移到开始复制的位置

	for (; j < end; j++)
	{
		str2[i] = *str1;
		str1++;
		i++;
	}
	return str2;
}
