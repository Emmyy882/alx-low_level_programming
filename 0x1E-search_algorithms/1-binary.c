# include "search_algos.h"

/**
 * print_array - prints the elements in an array
 * @array: pointer to the array
 * @left: the left index of the array
 * @right: the right index of the array
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;
	if (array)
	{
		printf("Searching in array: ");
                for (i = left; i <= right; i++)
		{
			if (i != right)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				printf("%d", array[i]);
			}
		}
		printf("\n");
	}
}

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
	size_t mid, left, right;

	mid = left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		print_array(array, left, right);

		if (array[mid] == value)
		{
			return ((int)mid);
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
