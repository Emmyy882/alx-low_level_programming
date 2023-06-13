#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 except 2 and 4
 * Return: The number since 0 up to 9
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
