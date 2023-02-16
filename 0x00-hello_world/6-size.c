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
	printf("Size of a char: %lu", sizeof(a), " byte (s)\n");
	printf("Size of an int: %lu", sizeof(txt), " byte (s)\n");
	printf("Size of a long int: %lu", sizeof(c), " byte (s)\n");
	printf("Size of a long long int: %lu", sizeof(b), " byte (s)\n");
	printf("Size of a float: %lu", sizeof(d), " byte (s)\n");
	return (0);
}
