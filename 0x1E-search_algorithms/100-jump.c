#include "search_algos.h"

/**
 * min - checks the minimum between two numbers
 * @a: first number check
 * @b: second number to check
 *
 * Return: minimum number
 */
size_t min(size_t a, size_t b)
{
	if (b > a)
	{
		return (a);
	}
	else
	{
		return (b);
	}
}

/**
 * jump_search - searches for a value in a sorted array using the jump search
 * algorithm
 * @array: pointer to the first element of the array to seach in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: index of where the value is located. if value is not present in
 * array or if array is NULL, function must return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, prev, step;

	prev = 0;
	step = sqrt(size);  /* finding block size to be jumped */
	if (!array)
		return (-1);

	while (array[min(step, size) - 1] < value)
	{
		i = min(step, size);
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
	}
	/* doing a linear search for value in block beginning with prev */
	while (array[prev] < value)
	{
		prev++;
		if (prev == min(step, size))
			return (-1);
	}
	/* if value is found */
	if (array[prev] == value)
		return (prev);
	return (-1);
}
