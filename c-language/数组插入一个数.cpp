#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[6] = { 1,3,5,7,9 };
	int i, j, num,temp1,temp2;

	printf("请输入要插入的数:\n");
	scanf_s("%d", &num);

	if (num == a[4])
		a[5] = num;
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (a[i] > num)
			{
				temp1 = a[i];
				a[i] = num;

				for (j = i + 1; j < 6; j++)
				{
					temp2 = a[j];
					a[j] = temp1;
					temp1 = temp2;
				}
				break;
			}

		}
	}

	for (i = 0; i < 6; i++)
	{
		printf("%d\t", a[i]);
	}

	system("pause");
	return 0;
}