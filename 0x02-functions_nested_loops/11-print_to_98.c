#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Takes the parameter
 * @n: The parameter variable
 */
void print_to_98(int n)
{
	if (n >= 0 && n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(", ");
			}
		
		}
		printf(" ");
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n > 98)
			{
				printf(", ");
			}
		}
		printf(" ");
	}
	else if (n < 0)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(", ");
			}
		}
		printf(" ");
	}
}
