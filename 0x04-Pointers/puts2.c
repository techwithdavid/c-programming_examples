#include <stdio.h>

void puts2(char *str);

int main(void)
{
	char *str;

	str = "0123456789";
	puts2(str);
}

/**
 * puts2 - prints every other character of a string
 * @str: argument to the function
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
	putchar(10);
}
