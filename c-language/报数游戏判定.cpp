/*有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），凡报到3的人退出
　　　圈子，问最后留下的是原来第几号的那位。*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, k, m, n, num[50], *p;

	printf("please input the total of numbers:");
	scanf_s("%d", &n);

	p = num;

	for (i = 0; i < n; i++)
	{
		*(p + i) = i + 1;
	}

	i = 0;
	k = 0;
	m = 0;

	while (m < n - 1)
	{
		if (*(p + i) != 0) 
			k++;               //k是计数器，每3次清零
		if (k == 3)
		{
			*(p + i) = 0;     //将报3的人的序号变为零
			k = 0;
			m++;             //m是报3的人的个数，当m为n-1，即剩下一个人时，退出循环
		}
		i++;
		if (i == n)          //每个人都报过一次数之后，重新标号
			i = 0;
	}
	while (*p == 0)          //将指针后移，直到指向的序号不为0
		p++;
	printf("%d is left\n", *p);     //打印改序号

	system("pause");
	return 0;
}