#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str1[100], str2[100];
	char *p1, *p2;
	int num = 0;

	printf("�������ַ���:\n");
	scanf_s("%s", str1, 100);

	printf("�������ַ���:\n");
	scanf_s("%s", str2, 100);

	p1 = str1;
	p2 = str2;

	while (*p1 != '\0')
	{
		if (*p1 == *p2)             //��ͬʱ������ͬʱ����
		{
			p1++;
			p2++;

			if (*p2 == '\0')
			{
				num++;
				p2 = str2;       //�ҵ�һ����ͬ��p2��ͷ��ʼ ��p1ƥ��
			}
		}
		else                      //��ͬʱ��p1����
			p1++;
	}
	printf("\n\n%d", num);

	system("pause");
	return 0;
}