#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, result = 0;

	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result = va_arg(args, int);
		printf("%d", result);

		if (i < (n - 1))
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(args);
	}
	printf("\n");
}
