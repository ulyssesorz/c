#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n=0;
	float a=0;
	float i = 0;
	char b='+';

	printf("����һ�����ʽ:\n\n");

	while (b != ';')
	{
		if (n == 0)                 //��һ�������ʹ����ǰ��һλ����ifֱ�Ӱѵ�һ�����븳��i
		{
			scanf_s("%f", &i);     
			n = 1;
		}
		else
		{
			b = getchar();

			if(b != ';')                   //��ֹ���һ������ֺź��������
			{
			    scanf_s("%f", &a);
				switch (b)
				{
				case'+':i = i + a; break;
				case'-':i = i - a; break;
				}
			}
		}
	}
	printf("\n\n");
	printf("����:%f", i);

	system("pause");
	return 0;
}

