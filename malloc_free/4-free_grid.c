#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously allocated with malloc.
 * @grid: The 2D array to be freed.
 * @height: The number of rows in the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
