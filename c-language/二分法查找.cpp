#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,t=0;
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int low = 0;
	int high = 9;
	int middle = 0;
	scanf_s("%d", &n);
	while (low <= high)
	{
		middle = (low + high) / 2;
		if (n == a[middle])
		{
			t = 1; break;
		}

		else if (n > a[middle])
			low = middle + 1; 

		else
			high = middle - 1; 
	}
	if (t == 1)
		printf("存在，位置是%d\n", middle);
	else
		printf("不存在\n");
	system("PAUSE");
}



