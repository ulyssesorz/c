#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,m,i,t;     //n�����������m��n�ĸ�λ����ʮλ��....,,  t�Ǽ���������ʾn�ļ�λ��
	int temp;
	int a[100];

	scanf_s("%d", &n);

	for(i=0;n!=0;i++)
	{	
		m = n % 10;
		a[i] = m;       /*ȡ����m�ǴӸ�λ��ʼ�ģ��轫��˳��ߵ���
					    ��ÿȡ��һ�����ʹ���������У�������for��䵹ת˳��*/
		n /= 10;
		t = i+1;             
	}
	for (i = 0; i < t/2; i++)      //�ߵ�����������˳��
	{
		temp = a[i];
		a[i] = a[t-1-i];
		a[t-1-i] = temp;
	}

	for (i = 0; i < t; i++)
	{
		temp = a[i];            //��ÿ����������ʱ����temp
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