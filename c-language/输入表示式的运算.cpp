#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, m;
	char c = '#';                            //���⸳ֵ����Ϊ=����

	printf("Please enter a expression:\n");
	scanf_s("%d", &num);

	while (c != '=')
	{
		c = getchar();
		if (c != '=')                      //��ֹ���һ������=���������
		{
			scanf_s("%d", &m);
			switch (c)
			{
			case '+':num += m; break;
			case '-':num -= m; break;
			default:break;
			}
		}
	}
	printf("%d\n", num);

	system("pause");
	return 0;
}

