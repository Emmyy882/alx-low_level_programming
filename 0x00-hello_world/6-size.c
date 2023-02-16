#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu",sizeof(char)," byte (s)\n");
	printf("Size of an int: %lu",sizeof(int)," byte (s)\n");
	printf("Size of a long int: %lu",sizeof(long int)," byte (s)\n");
	printf("Size of a long long int: %lu",sizeof(long long int)," byte (s)\n");
	printf("Size of a float: %lu",sizeof(float)," byte (s)\n");
	return (0);
}
