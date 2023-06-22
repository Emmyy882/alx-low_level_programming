#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i, size = n;
	char *result;

	va_list args;
	if (separator == NULL)
		return;

	va_start(args, n);
	for (i = 0; i < size; i++)
	{
		result = va_arg(args, char*);
		if (result == NULL)
		{
			printf("(nil)");
		}
		printf("%s", result);

		if (i != (size - 1))
			printf("%s", separator);
		va_end(args);
	}
	printf("\n");
}
