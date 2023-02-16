#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int txt;
	long int c;
	long long int b;
	float d;

	printf("Size of a char: %lu byte (s)\n", sizeof(a));
	printf("Size of an int: %lu byte (s)\n", sizeof(txt));
	printf("Size of a long int: %lu byte (s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte (s)\n", sizeof(b));
	printf("Size of a float: %lu byte (s)\n", sizeof(d));
	return (0);
}
