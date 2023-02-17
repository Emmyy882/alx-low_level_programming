#include <stdio.h>

/**
 * main - Entry point
 * program to output the letters of the alphabet from small letters to capital letters using the putchar() function
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
	putchar('$');
	putchar('\n');
	return (0);
}
