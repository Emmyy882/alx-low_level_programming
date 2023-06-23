#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	unsigned int j = 0;
	int i = 0, num = 0;
	char c;
	float f;
	char *s;

	va_list args;
	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c = (char)va_arg(args, int);
				printf("%c, ", c);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d, ", num);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f, ", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				printf("%s", s);
				if (j != (sizeof(format - 1)))
					printf(",");
				break;
		}
		i++;
		j++;
	}
	va_end(args);
	printf("\n");
}
