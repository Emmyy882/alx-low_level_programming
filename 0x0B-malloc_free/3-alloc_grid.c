#include <stdio.h>
#include <stdlib.h>

/**
 * _alloc - initializes a 2D array
 *
 * @ptr: array
 *
 * @width: stores number of rows
 *
 * @height: store number of columns
 * 
 * Return: pointer to array
 */
int *_alloc(int **ptr, int width, int height)
{
	int i, j;

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (*ptr);
}

/*
 * _strlen - gets length of arguments
 *
 * @size: the argument
 *
 * Return: length of argument
 */
int _strlen(int size)
{
	int i = 0;

	while (i < size)
	{
		i++;
	}
	return (i);
}

/**
 * alloc - function that returns a pointer to a 2 dimensional array of integers
 *
 * @width: array rows
 *
 * @height: array colums
 *
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int len1 = 0, len2 = 0;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	len1 = _strlen(width);
	len2 = _strlen(height);
	ptr = (int **)malloc((len1 + len2 + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr = _alloc(*ptr, width, height);
	return (ptr);
}
