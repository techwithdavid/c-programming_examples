#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that prints the sizes of data 
 * types
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of int is: %lu\n", sizeof(int));
	printf("Size of char is: %lu\n", sizeof(char));
	printf("Size of float is: %lu\n", sizeof(float));
	printf("Size of double is: %lu\n", sizeof(double));

	return (0);
}
