#include<stdio.h>
#include<stdlib.h>
int main()
{
	void hanoi(int n, char one, char two, char three);
	int n;
	printf("����������:\n");
	scanf_s("%d", &n);
	printf("��Ҫ�Ĳ���Ϊ:%d\n", n);
	hanoi(n, 'A', 'B', 'C');
	system("PAUSE");
	return 0;
}
void hanoi(int n, char one, char two, char three)
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
	return ;
}
void move(char x,char y)
{
	printf("%c-->%c\n", x, y);
	return ;
}