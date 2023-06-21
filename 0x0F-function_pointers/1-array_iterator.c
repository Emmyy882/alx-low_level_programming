#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to function
 *
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
