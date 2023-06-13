#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * @size: stores the size of array
 * @c: a string of characters
 * Return: 0 if size = NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
