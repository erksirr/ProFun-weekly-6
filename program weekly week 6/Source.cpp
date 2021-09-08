#include<stdio.h>
int main()
{
	int x;
	scanf_s("%d", &x);
	for (int i = 1; i <= 2 * x - 1; i++)printf("*");
	printf("\n");
	for (int i = 1; i <= x - 1; i++)
	{
		for (int j = 1; j <= i; j++)printf(" ");
		for (int j = 1; j <= x - i; j++)printf("*");
		for (int j = 1; j < x-i ; j++)printf("*");
		printf("\n");
	}
	for (int i = 1; i <= x - 2; i++)
	{
		for (int j = 1; j <= x - i - 1; j++)printf(" ");
		for (int j = 1; j <= i+1; j++)printf("*");
		for (int j = 1; j <= i ; j++)printf("*");
		printf("\n");
	}
	for (int i = 1; i <= 2 * x - 1; i++)printf("*");
}