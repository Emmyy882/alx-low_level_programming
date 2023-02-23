#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: parameter to indicate number of diagonal
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(''\'');
			_putchar('\n');
		}
