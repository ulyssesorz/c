#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[6] = { 1,3,5,7,9 };
	int i, j, num, temp1, temp2;

	printf("Please enter the number you want to insert:\n");
	scanf_s("%d", &num);

	if (num >= a[4])                    //���num����������������ĩβ����
		a[5] = num;
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (num <= a[i])
			{
				temp1 = a[i];
				a[i] = num;

				for (j = i + 1; j < 6; j++)    //���������ƣ�����ð�ݷ��еĽ���
				{
					temp2 = a[j];
					a[j] = temp1;
					temp1 = temp2;
				}
				break;
			}
		}
	}
	printf("The result is :\n");
	for (i = 0; i < 6; i++)
	{
		printf("%d\t", a[i]);
	}

	system("pause");
	return 0;
}