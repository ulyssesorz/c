/*��n����Χ��һȦ��˳���źš��ӵ�һ���˿�ʼ��������1��3��������������3�����˳�
������Ȧ�ӣ���������µ���ԭ���ڼ��ŵ���λ��*/
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
			k++;               //k�Ǽ�������ÿ3������
		if (k == 3)
		{
			*(p + i) = 0;     //����3���˵���ű�Ϊ��
			k = 0;
			m++;             //m�Ǳ�3���˵ĸ�������mΪn-1����ʣ��һ����ʱ���˳�ѭ��
		}
		i++;
		if (i == n)          //ÿ���˶�����һ����֮�����±��
			i = 0;
	}
	while (*p == 0)          //��ָ����ƣ�ֱ��ָ�����Ų�Ϊ0
		p++;
	printf("%d is left\n", *p);     //��ӡ�����

	system("pause");
	return 0;
}