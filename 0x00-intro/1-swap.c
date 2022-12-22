#include <stdio.h>

int main(void)
{
	int x, y, ch;

	printf("Enter first number :");
	scanf("%d", &x);
	printf("Enter second number: ");
	scanf("%d", &y);

	ch = x;
	x = y;
	y = ch;

	printf("After swapping, x = %d\n", x);
	printf("After swappimg, y = %d\n", y);

	return (0);
}
