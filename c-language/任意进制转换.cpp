#include<stdio.h>
#include<stdlib.h>

int main()
{
	void fun(int, int);
	int num;
	int m;

	printf("Please enter one number: ");
	scanf_s("%d", &num);

	printf("Please enter the basic number: ");
	scanf_s("%d", &m);

	fun(num, m);

	system("pause");
	return 0;
}
void fun(int a, int b)
{
	int c = 1;

	if (a == 0)
		c = 0;                        //c取值无限制
	else
	{
		fun(a / b, b);
		c = a % b;

		if (c < 10)
			printf("%d\n", c);
		else
			printf("%c\n", c + 87);   //把大于9的数转化为字母(a的ASCII码是97，即10+87)

	}
}
