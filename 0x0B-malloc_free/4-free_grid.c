#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - frees a two dimensional grid
 * @grid: a two dimensional grid
 * @height: height of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int h = 0;

	while (h < height)
	{
		free(grid[h]);
		h++;
	}
	free(grid);
}
