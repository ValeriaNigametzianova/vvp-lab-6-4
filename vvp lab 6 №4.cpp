#include<stdio.h>

int main()
{
	int y, x, t;
	printf("x = ");
	scanf_s("%d", &x);
	t = x * x; // заменим x^2 на переменную 
	y = 3 * t * t * t - 6 * t - 7; // теперь строка с вычислением значения функции выглядит проще
	printf("y = %d", y);
	return 0;
}
