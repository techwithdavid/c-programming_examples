#include <stdio.h>

void print_rev(char *s);

int main(void)
{
	char *str, res;

	str = "This will be printed backward";
	print_rev(str);

}

/**
 * print_rev - prints a string, in reverse, followed by a
 * new line
 * @s: argument to the function
 * Return: void
 */
void print_rev(char *s)
{
	int i, j, max;
	char rev[40];

	max = 0;
	while (s[max] != '\0')
	{
		max++;
	}
	i = max - 1;

	for (j = 0; j < max; j++)
	{
		rev[j] = s[i];
		i--;
	}

	printf("%s\n", rev);
}
