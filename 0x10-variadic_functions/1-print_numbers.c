#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - print numbers followed by new line
 * @separator: string to be printed between numbers
 * @n: stores number of passed arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int size = n, result = 0, i;

	va_list args;

	if (separator == NULL)
	{
		return;
	}

	va_start(args, n);
	for (i = 0; i < size; i++)
	{
		result = va_arg(args, int);
		printf("%d", result);
		if (i != (size - 1))
		{
			printf("%s ", separator);
		}
		va_end(args);
	}
	printf("\n");
}
