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
		for (c = 0; c < a; c++)
		{
			printf("*");
		}
			for (b = d-1; b > a-1 ; b--)
		{
			printf(" ");
		}
		for (c = d; c > a-1 ; c--)
		{
			printf("*");
		}
	
		printf("\n");
	}
	for (a = 1; a <= d; a++)
	{
		for (b = d; b >= a + 1; b--)
		{
			printf(" ");
		}
		for (c = 0; c < a; c++)
		{
			printf("*");
		}
		for (b = 0; b <= a-2 ; b++)
		{
			printf(" ");
		}
		
		for (c = a; c <= d; c++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;

}