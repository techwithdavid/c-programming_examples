#include <stdio.h>

void puts_half(char *str);

int main(void)
{
	char *str;

	str = "0123456789";
	puts_half(str);
}

void puts_half(char *str)
{
	int i, length, half;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	half = length / 2;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i < half)
		{
			continue;
		}
		else
		{
			putchar(str[i]);
		}
	}
	putchar(10);
}
