#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str1[100], str2[100];
	char *p1, *p2;
	int num = 0;

	printf("Please enter the main string:\n");
	scanf_s("%s", str1, 100);

	printf("Please enter the substring:\n");
	scanf_s("%s", str2, 100);

	p1 = str1;
	p2 = str2;

	while (*p1 != '\0')
	{
		if (*p1 == *p2)
		{
			p1++;                        //相同时，两者同时后移
			p2++;

			if (*p2 == '\0')
			{
				num++;
				p2 = str2;              //找到一段相同后，p2从头开始 与p1匹配
			}
		}
		else
			p1++;                        //不同时，p1后移
	}
	printf("\nThe number of its occurence is %d\n", num);

	system("pause");
	return 0;
}