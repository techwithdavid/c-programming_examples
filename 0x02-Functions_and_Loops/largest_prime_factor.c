#include <stdio.h>

/* void largest_prime_factor(int n); */

int main(void)
{
	long int i, n, max;

	n = 124;
	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
		{
			//max = i;
			n = n / i;
			max = i;
		}
	}

	printf("%li\n", max);

	return (0);
}

/**
void largest_prime_factor(int n)
{
	int i;

	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
		{
			//printf("%d\n", i);
			n = n / i;
		}

		//printf("%d\n", i);
	}
	printf("%d\n", n);
}
*/
