#include <stdio.h>

int main(){
	int a, b, c, d, e;
	a = 0;
	b = 0;
	c = 0;
	printf("�ﰢ�� �Ѻ��� ����");
	scanf("%d", &d);
	for (a = 1; a <= d; a++)
	{
		for (c = d; c > a - 1; c--)
		{
			printf("*");
		}
		for (b = 1; b <= a-1; b++)
		{
			printf(" ");
		}
		for (b = 1; b < a+1; b++)
		{
			printf("*");
		}
		for (c = d; c <= a+1; c++)
		{
			printf(" ");
		} 
		printf("\n");
	}
	return 0;
}