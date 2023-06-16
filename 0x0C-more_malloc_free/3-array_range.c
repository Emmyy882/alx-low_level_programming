#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: lowest of the integer range
 *
 * @max: the highest of the integer range
 *
 * Return: the array of integers from min to max
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(max * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
