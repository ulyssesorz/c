#include<stdlib.h>
#include <stdio.h>
#include<windows.h>

int main()
{
	system("color F4");
	for (float y = 1.5f; y > -1.5f; y -= 0.1f)
	{
		for (float x = -1.5f; x < 1.5f; x += 0.05f)
		{
			float a = x * x + y * y - 1;
			putchar(a * a * a - x * x * y * y * y <= 0.0f ? '*' : ' ');
			Sleep(15);
		}
		putchar('\n');
	}

	system("pause");
	return 0;
}

