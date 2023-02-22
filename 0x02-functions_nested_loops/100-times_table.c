#include "main.h"
#include <stdio.h>

/**
 * print_times_table - holds the number parameter
 * @n: The parameter
 */
void print_times_table(int n)
{
	int i, j;

	if (i >= 0 && i <= 15)
	{
		for (i = 0; i <= 15; i++)
		{
			for (j = 0; j <= 15; j++)
			{
				printf("%d", i * j);
			}
		}
