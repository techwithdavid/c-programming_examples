#include <stdio.h>

void print_triangle(int n);

int main(void)
{
	print_triangle(4);
}

/**
 * print_triangle - prints a triangle followed by a new line
 *
 *
 */
void print_triangle(int n)
{
	int i, j, k;

	for (i = 0; i < n; i++)
	{
		for (j = n; j > (i + 1); j--)
		{
			putchar(' ');
		}

		for (k = 0; k <= i; k++)
		{
			putchar('#');
		}
		putchar(10);
	}
}
