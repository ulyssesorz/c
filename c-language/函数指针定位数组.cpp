#include<stdio.h>
#include<stdlib.h>
int main()
{
	int score[][4] = { 1,2,3,4,5,6,7,8,9,1,2,3 };
	int *search(int(*pointer)[4], int n);
	int *p;
	int i, m,n;

	printf("����ѧ������ţ�\n");
	scanf_s("%d", &n);
	printf("��ѧ���ĳɼ��ǣ�\n");
                
	p = search(score, n-1);     //ԭ��ѧ������Ŵ��㿪ʼ���˴���Ϊ�� 1 ��ʼ��


	for (i = 0; i < 4; i++)
	{
		printf("%d\t", *(p + i));
	}
	system("PAUSE");
	return 0;
}
int *search(int (*pointer)[4],int m)   //��ָ�붨λ������ĵ�m�С�
{
	int *p;
	p = *(pointer+m);
	return p;
}