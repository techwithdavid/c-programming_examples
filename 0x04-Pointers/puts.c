#include <stdio.h>

void _puts(char *str);

int main(void)
{
	char *str;

	str = "C is fun";
	_puts(str);

	return (0);
}

void _puts(char *str)
{
	int i;
	char res[30];

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
