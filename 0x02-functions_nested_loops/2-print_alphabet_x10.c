#include "main.h"

/**
 * print_alphabet_x10 - print letters in lowercase x10
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		letter = 'a';
	}
	return (0);
}
