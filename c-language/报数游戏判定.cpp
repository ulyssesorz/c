/*��n����Χ��һȦ��˳���źš��ӵ�һ���˿�ʼ��������1��3��������
������3�����˳�Ȧ�ӣ���������µ���ԭ���ڼ��ŵ���λ��*/

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

	count = 0;              //count�Ǽ�����
	i = 0;
	m = 0;                  //m�Ǳ���3������

	while (m < num - 1)
	{
		if (*(p + i) != 0)      //�����Ѿ��˳�����
			count++;

		if (count == 3)
		{
			count = 0;
			*(p + i) = 0;        //����3����ű�Ϊ0��
			m++;                //m�Ǳ�3���˵ĸ�������mΪn-1����ʣ��һ����ʱ���˳�ѭ��
		}
		i++;
		if (i == num)
			i = 0;             //����һ�ֺ����±��
	}

	while (*p == 0)                 //��ָ����ƣ�ֱ��ָ�����Ų�Ϊ0
		p++;
	printf("%d is left.\n", *p);     //��ӡ�����


	system("pause");
	return 0;
}