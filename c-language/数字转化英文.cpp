#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,m,i,t;     //n是输入的数，m是n的个位数、十位数....,,  t是计数器，表示n的几位数
	int temp;
	int a[100];

	scanf_s("%d", &n);

	for(i=0;n!=0;i++)
	{	
		m = n % 10;
		a[i] = m;       /*取出的m是从个位开始的，需将其顺序颠倒，
					    故每取出一个数就存放在数组中，后面用for语句倒转顺序*/
		n /= 10;
		t = i+1;             
	}
	for (i = 0; i < t/2; i++)      //颠倒数组内数的顺序
	{
		temp = a[i];
		a[i] = a[t-1-i];
		a[t-1-i] = temp;
	}

	for (i = 0; i < t; i++)
	{
		temp = a[i];            //将每个数赋给临时变量temp
		switch (temp)
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