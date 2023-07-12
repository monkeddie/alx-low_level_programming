#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid
 * @grid: Pointer to the 2D grid
 * @height: The height of the grid
 *
 * Return: None
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
