#include <stdio.h>

void print_number(int n);

int main(void)
{
	print_number(-10);	
}

void print_number(int n)
{
	if (n < 0)
	{
		putchar(45);
		n = -n;
	}
}
