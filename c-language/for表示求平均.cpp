#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[3][4];
	int i, j, sum = 0;
	printf("����һ��3*4�����飺\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (j = 0; j < 4; j++) 
	{
		sum = *(a[1] + j);
		for (i = 1; i < 3; i++) 
		{
			sum += *(a[i] + j);
		}
		printf("��%d�еĺ�Ϊ��%d\n", j + 1, sum);
	}
	return 0;
}