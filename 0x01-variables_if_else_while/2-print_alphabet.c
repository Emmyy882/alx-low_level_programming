#include <stdio.h>

/**
 * program to print out letters of the alphabet in small letters
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		putchar(a);
		a++;
	}
	return (0);
}
