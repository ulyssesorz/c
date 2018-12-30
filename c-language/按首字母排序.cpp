#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i, j;
char str[10][100];

int main()
{
	void sort(char str[10][100]);

	for (i = 0; i < 10; i++)
	{
		printf("请输入第%d个字符串:\n",i+1);
		scanf_s("%s",str+i,100);
	}

	sort(str);

	printf("排序后的结果是:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%s\n", *(str+i));
	}

	system("pause");
	return 0;

}
void sort(char str[10][100])
{
	char temp[100];
	for (j = 0; j < 9; j++)                            //冒泡算法
	{
		for (i = 0; i < 9 - j; i++)
		{
			if (strcmp(str[i], str[i + 1]) > 0)
			{
				strcpy_s(temp, str[i]);
				strcpy_s(str[i], str[i+1]);
				strcpy_s(str[i+1],temp);
			}
		}
	}
}

