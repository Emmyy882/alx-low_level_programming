#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - print numbers followed by new line
 * @separator: string to be printed between numbers
 * @n: number of passed arguments
 * 
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i, size, result;

	va_list args;
	
	size = n;
	result = 0;
	if (separator == NULL)
		return;
	
	if (n == 0)
		printf("%d", 0);

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
