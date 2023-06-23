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
	int i = 0, num = 0;
	char c;
	float f;
	char *s;

	va_list args;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == 'i')
		{
			num = va_arg(args, int);
			printf("%d, ", num);
		}
		else if (format[i] == 'c')
		{
			c = (char)va_arg(args, int);
			printf("%c, ", c);
		}
		else if (format[i] == 'f')
		{
			f = va_arg(args, double);
			printf("%f, ", f);
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s, ", s);
		}
		i++;
	}
	va_end(args);
	printf("\n");
}


