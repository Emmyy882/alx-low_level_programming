#include "main.h"

/**
 * printing small letters
 * print_alphabet to print small letter
 * Result: Always 0 (Sucess)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
