#include "main.h"
#include <stdio.h>

/**
 * reverse_array - prints reverse of an array
 * @a: the array
 * @n: number of elements in the array
 * Return; empty
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
