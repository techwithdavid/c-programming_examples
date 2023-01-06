#include <stdio.h>

void prime_factors(int n);

int main(void)
{
	int num;

	printf("Enter the number whose prime factors are to be printed:\n");
	scanf("%d", &num);

	prime_factors(num);
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
