#include <stdio.h>

int main()
{
	int a, b, c, d;
	printf("삼각형 한변의 길이");
	scanf("%d", &d);
	for (a = 0; a <= d; a++)
	{
		for (b = 0; b <= a; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (a = 0; a < d; a++)
	{
		for (b = 0; b < d-a; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}