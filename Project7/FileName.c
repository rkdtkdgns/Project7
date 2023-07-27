#include <stdio.h>

int main(){
	int a, b, c, d, e;
	a = 0;
	b = 0;
	c = 0;
	printf("삼각형 한변의 길이");
	scanf("%d", &d);
	for (a = 1; a <= d; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf("*");
		}
		for (c = d; c <= 0; c++)
		{
			printf(" ");
		} 
		printf("\n");
		for (c = d; c > a+1; c--)    
		{
			printf("*");
		}
		for (b = 1; b <= a; b++)
		{
			printf(" ");
		}
	}
	return 0;
}