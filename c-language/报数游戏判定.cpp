/*有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），
凡报到3的人退出圈子，问最后留下的是原来第几号的那位。*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int count, i, m, num;
	int a[50], *p;

	printf("Please enter the number of people:\n");
	scanf_s("%d", &num);

	p = a;
	for (i = 0; i < num; i++)
	{
		*(p + i) = i + 1;
	}

	count = 0;              //count是计数器
	i = 0;
	m = 0;                  //m是报到3的人数

	while (m < num - 1)
	{
		if (*(p + i) != 0)      //跳过已经退出的人
			count++;

		if (count == 3)
		{
			count = 0;
			*(p + i) = 0;        //报到3的序号变为0；
			m++;                //m是报3的人的个数，当m为n-1，即剩下一个人时，退出循环
		}
		i++;
		if (i == num)
			i = 0;             //报完一轮后重新标号
	}

	while (*p == 0)                 //将指针后移，直到指向的序号不为0
		p++;
	printf("%d is left.\n", *p);     //打印该序号


	system("pause");
	return 0;
}