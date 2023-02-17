#include <stdio.h>

/**
 * main - Entry point
 * program to print out letters of the alphabet in small letters
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(letter[i]);
	}
	putchar('\n');
	return (0);
}
