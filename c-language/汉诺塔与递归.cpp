#include<stdio.h>
#include<stdlib.h>

int main()
{
	void hanoi(int n, char one, char two, char three);
	int n;

	printf("Please enter the number of plates: ");
	scanf_s("%d", &n);

	printf("The steps are:\n");
	hanoi(n, 'A', 'B', 'C');

	system("pause");
	return 0;
}
void hanoi(int n, char one, char two, char three)   //递归，详情参见图解
{
	void move(char x, char y);
	if (n == 1)
		move(one, three);
	else
	{
		hanoi(n - 1, one, three, two);
		move(one, three);
		hanoi(n - 1, two, one, three);
	}
}
void move(char x, char y)
{
	printf("%c-->%c\n", x, y);
}