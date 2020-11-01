#include<stdio.h>

int main()
{
	int y, x, t;
	printf("x = ");
	scanf_s("%d", &x);
	t = x * x;
	y = 3 * t * t * t - 6 * t - 7;
	printf("y = %d", y);
	return 0;
}