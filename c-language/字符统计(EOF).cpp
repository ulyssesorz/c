#include<stdio.h>

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

	printf("������%d��\n",num);
	printf("�пհ׷�%d��\n", emp);
	printf("�������ַ�%d��\n", els);
	getchar();
	return 0;
}
