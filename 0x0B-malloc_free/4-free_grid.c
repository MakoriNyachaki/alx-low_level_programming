#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional
 * grid previously created by your alloc_grid function
 *
 * @grid: grid to free
 * @height: height of the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int k;

	k = 0;
	while (k < height)
	{
		free(grid[k]);
		k++;
	}
	free(grid);
}
