#include <stdio.h>

/**
 * main - Entry point
 * program to print letters except q
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters[26] ="abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (letters[i] == 'e' || letters[i] == 'q')
		{
			continue;
		}
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
