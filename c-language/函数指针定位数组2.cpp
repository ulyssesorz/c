#include<stdio.h>
#include<stdlib.h>

int main()
{
	float score[][4] = { {60,70,80,90},{56,89,67,88},{34,78,90,66} };
	float *search(float(*pointer)[4]);
	float *p;
	int i;
	int j;
	for (i = 0; i < 3; i++)
	{
		p = search(score + i);
		if (p == *(score + i))    //������һ�к����Ĵ����˴�һ������
		{
			printf("No.%d score:", i+1);
			for (j = 0; j < 4; j++)         //��ӡ������ѧ�������гɼ���
			{
				printf("%5.2f  ", *(p + j));
			}
			printf("\n");
		}
	}
	system("PAUSE");
	return 0;
}

float *search(float(*pointer)[4])    //��ָ�붨λ�������ѧ������š�
{
	int i;
	float *pt;
	pt = NULL;
	for (i=0; i < 4; i++)
	{
		if (*(*pointer + i) < 60)
		{
			pt = *pointer;
		}
	}
	return pt;
}
