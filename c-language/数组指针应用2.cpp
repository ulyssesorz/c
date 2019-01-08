#include<stdio.h>
#include<stdlib.h>

int main()
{
	float *search(float(*pointer)[4]);
	float score[][4] = { {60,70,80,90},{56,89,67,88},{34,78,90,66} };
	int j, i;
	float *p;

	for (i = 0; i < 3; i++)
	{
		p = search(score + i);
		if (p == *(score + i))              //条件是有小于60的分数
		{
			printf("No.%d score: ", i + 1);
			for (j = 0; j < 4; j++)         //打印不及格学生的所有成绩。
			{
				printf("%5.2f  ", *(p + j));
			}
			printf("\n");
		}
	}

	system("pause");
	return 0;

}
float *search(float(*pointer)[4])
{
	int i;
	float *pt = NULL;

	for (i = 0; i < 4; i++)
	{
		if (*(*pointer + i) < 60)
			pt = *pointer;
	}
	return pt;
}