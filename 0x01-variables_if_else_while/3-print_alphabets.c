#include <stdio.h>

/**
 * main - Entry point
 * program to output the letters
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
