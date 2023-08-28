#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free a 2 dimensional grid
 * @grid: the address of the 2D array.
 * @height: of the grid.
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
