# include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: index where value is located. if value is not present in array or
 * if array is NULL, function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, mid, left, right;

	i = mid = left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;  /* search in right half */
		}
		else
		{
			right = mid - 1;  /* search in left half */
		}
	}
	return (-1);  /* if array is NULL or value not present in array */
}
