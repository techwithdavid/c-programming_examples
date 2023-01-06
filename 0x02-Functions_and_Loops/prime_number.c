#include <stdio.h>

void prime_number(int n);

int main(void)
{
	int num;

	printf("Enter the number to be checked if it's a prime number:\n");
	scanf("%d", &num);

	prime_number(num);

	return (0);
}

void prime_number(int n)
{
	int i, check = 0;

	for (i = 2; i <= (n / 2); i++)
	{
		if (n % 2 == 0)
		{
			check = 1;
		}
	}

	if (check == 0)
	{
		printf("%d is a prime number.\n", n);
	}
	else
	{
		printf("%d is not a prime number.\n", n);
	}
}
