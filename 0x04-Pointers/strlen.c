#include <stdio.h>

int _strlen(char *s);

int main(void)
{
	char *str;
	int len;

	str = "Length oh!";
	len = _strlen(str);

	printf("Length is %d\n", len);
}

int _strlen(char *s)
{
	int i, count;

	for (i = 0; s[i] != 0; i++)
	{
		count++;
	}

	return count;
}
