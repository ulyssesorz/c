#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str1[100], str2[100];
	char *p1, *p2;
	int num = 0;

	printf("输入主字符串:\n");
	scanf_s("%s", str1, 100);

	printf("输入子字符串:\n");
	scanf_s("%s", str2, 100);

	p1 = str1;
	p2 = str2;

	while (*p1 != '\0')
	{
		if (*p1 == *p2)             //相同时，两者同时后移
		{
			p1++;
			p2++;

			if (*p2 == '\0')
			{
				num++;
				p2 = str2;       //找到一段相同后，p2从头开始 与p1匹配
			}
		}
		else                      //不同时，p1后移
			p1++;
	}
	printf("\n\n%d", num);

	system("pause");
	return 0;
}