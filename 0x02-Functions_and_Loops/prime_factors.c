#include <stdio.h>

void prime_factors(int n);

int main(void)
{
	prime_factors(8);
}

void prime_factors(int n)
{
	int i;

	for (i = 2; n > 1; i++)
	{
		while (n % i == 0)
		{
			printf("%d\n", i);
			n /= i;
		}
	}
}
