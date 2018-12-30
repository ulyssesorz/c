#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>

int n, m;
char str[100], str2[100];

char * strcopy(char *str)
{
	int t = 0, i;
	i = m - 1;
	str = str + i;
	for (; i < n; i++)
	{
		str2[t] = *str;
		str++;
		t++;
	}
	return str2;
}

int main()
{
	char *strcopy(char *);
	char *p;
	int i;

	printf("ÇëÊäÈën:\n");
	scanf_s("%d", &n);

	printf("ÇëÊäÈëm:\n");
	scanf_s("%d", &m);

	printf("ÇëÊäÈë×Ö·û´®:\n");
	scanf_s("%s", str, 100);

	p = strcopy(str);

	for (i = 0; i < n - m + 1; i++)
	{
		printf("%c", *(p++));
	}

	system("pause");
	return 0;
}
