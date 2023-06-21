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

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			//terminates the loop
			break;
			return (i);
		}
		else
		{
			continue;
		}
	}
	//return -1 if no elements match
	if (cmp(array[i]) == 0)
	{
		return (-1);
	}
	return (i);
}

