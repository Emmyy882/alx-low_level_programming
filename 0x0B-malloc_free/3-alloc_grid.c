#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - initializes a two dimensional integer array
 * @width: width of the array
 * @height: height of array
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int h, w;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * height);
	if (grid == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}

	return (grid);
}
