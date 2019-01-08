#include<stdio.h>
#include<stdlib.h>

int main()
{
	int c = 0;
	int num = 0;
	int emp = 0;
	int els = 0;

	while ((c = getchar()) != EOF)
	{
		if ((c >= '0') && (c <= '9'))
		{
			num++;
		}
		else if (c == ' '||c=='\n'||c=='\t')
		{
			emp++;
		}
		else
		{
			els++;
		}
	}

	printf("有数字%d个\n",num);
	printf("有空白符%d个\n", emp);
	printf("有其他字符%d个\n", els);

	system("pause");
	return 0;
}
