#include <stdio.h>

void largest_prime_factor(int n);

int main(void)
{
	largest_prime_factor(18);
}

void largest_prime_factor(int n)
{
	int i;

	for (i = 2; n > 1; i++)
	{
		while (n % i == 0)
		{
			//printf("%d\n", i);
			n = n / i;
		}

		printf("%d\n", i);
	}
	//printf("%d\n", i);
}
