#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid     - Free up memory used by 2d array
 *
 * @grid         - The 2d array to be removed
 * @height       - Number of rows for 2d array to be removed
 *
 * Return:       - None
 */


void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid != NULL || height > 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
