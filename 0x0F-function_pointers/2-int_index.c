#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to the passed array
 * @size: number of elements in the array
 * @cmp: pointer to function
 *
 * Return: result
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			break;
			return (i);
		}
		else
		{
			continue;
		}
	}
	if (cmp(array[i]) == 0)
	{
		return (-1);
	}
	return (i);
}

