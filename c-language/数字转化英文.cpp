#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, i, temp, count = 0;
	int a[10];

	printf("Please enter a number: ");
	scanf_s("%d", &num);

	for (i = 0; num != 0; i++)         //��ȡ������λ���ϵ���
	{
		a[i] = num % 10;
		num /= 10;
		count++;                        //count��¼num�Ǽ�λ��
	}
	for (i = 0; i < count / 2; i++)    //��������������������ǵߵ��ģ����for��佫֮����
	{
		temp = a[i];
		a[i] = a[count - 1 - i];
		a[count - 1 - i] = temp;
	}
	for (i = 0; i < count; i++)
	{
		switch (a[i])
		{
		case 0:printf("zero "); break;
		case 1:printf("one "); break;
		case 2:printf("two "); break;
		case 3:printf("three "); break;
		case 4:printf("four "); break;
		case 5:printf("five "); break;
		case 6:printf("six "); break;
		case 7:printf("seven "); break;
		case 8:printf("eight "); break;
		case 9:printf("nine "); break;
		}
	}

	system("pause");
	return 0;
}