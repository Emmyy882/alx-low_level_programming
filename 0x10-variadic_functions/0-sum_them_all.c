#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all its parameters
 * @n: number of arguments
 *
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	int result = 0, i, size = n;

	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	for (i = 0; i < size; i++)
	{
		result += va_arg(args, int);
	}
	va_end(args);

	return (result);
}
