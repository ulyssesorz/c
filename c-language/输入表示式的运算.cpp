#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, m;
	char c = '#';                            //任意赋值，不为=即可

	printf("Please enter a expression:\n");
	scanf_s("%d", &num);

	while (c != '=')
	{
		c = getchar();
		if (c != '=')                      //防止最后一次输入=后继续运算
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

