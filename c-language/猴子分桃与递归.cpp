/*
海滩上有一堆桃子，五只猴子来分。第一只猴子把这堆桃子凭据分为五份，
多了一个，这只猴子把多的一个扔入海中，拿走了一份。第二只猴子把剩下的桃子又平均分成五份，
又多了一个，它同样把多的一个扔入海中，拿走了一份，第三、第四、第五只猴子都是这样做的，
问海滩上原来最少有多少个桃子？
*/

#include<stdio.h>
#include<stdlib.h>

int divided(int n, int m)                   //注意该递归函数的定义,n是桃子数，m是猴子数
{
	if (n % 5 != 1)
		return 0;                            //当桃子的分法不满足题意时，返回0

	if (m == 1)
		return 1;                            //当分法满足题意，还剩最后一只猴子时，返回1

	return divided(n - n / 5 - 1, m - 1);
}
int main()
{
	int n;
	int m = 5;

	for (n = 1; ; n++)
	{
		if (divided(n, m))
		{
			printf("%d\n", n);
			break;
		}
	}

	system("pause");
	return 0;
}