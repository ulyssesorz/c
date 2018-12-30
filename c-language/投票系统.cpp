#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct people
{
	char name[10];
};

int main()
{
	struct people a, b, c;
	a = { "bran" }; b = { "sansa" }; c = { "arya" };
	int i, max;
	int arry[3] = { 0,0,0};
	char temp[10];

	printf("开始投票，候选人有 bran，snasa，arya，请投票:");
	printf("\n\n*****************\n\n");

	for (i = 0; i < 5; i++)
	{
		printf("请投第%d票:", i + 1);
		scanf_s("%s", temp, 10);

		if (0 == strcmp(temp, a.name))
		{
			arry[0]++;
		}
		else if(0==strcmp(temp,b.name))
		{
			arry[1]++;
		}
		else if (0 == strcmp(temp, c.name))
		{
			arry[2]++;
		}
	}

	max = arry[0];
	for (i = 0; i < 2; i++)
	{
		if (arry[i] < arry[i + 1])
			max = arry[i + 1];
	}

	printf("\n\n**************\n\n");
	printf("bran的票为%d\n", arry[0]);
	printf("sansa的票为%d\n", arry[1]);
	printf("arya的票为%d\n", arry[2]);
	printf("\n*************\n");

	if (max == arry[0])
		printf("获胜者是bran\n");
	else if (max == arry[1])
		printf("获胜者是sansa\n");
	else
		printf("获胜者是arya\n");

	system("pause");
	return 0;
}