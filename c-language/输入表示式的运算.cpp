#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n=0;
	float a=0;
	float i = 0;
	char b='+';

	printf("输入一个表达式:\n\n");

	while (b != ';')
	{
		if (n == 0)                 //第一次输入会使符号前移一位，用if直接把第一个输入赋给i
		{
			scanf_s("%f", &i);     
			n = 1;
		}
		else
		{
			b = getchar();

			if(b != ';')                   //防止最后一次输入分号后继续运算
			{
			    scanf_s("%f", &a);
				switch (b)
				{
				case'+':i = i + a; break;
				case'-':i = i - a; break;
				}
			}
		}
	}
	printf("\n\n");
	printf("答案是:%f", i);

	system("pause");
	return 0;
}

