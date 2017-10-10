#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid     - Create 2d array of integers
 *
 * @width:          Width of the 2d array
 * @height:         Height of the 2d array
 *
 * Return:          Pointer to the 2d array
 */


int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);

		if (array[i] == NULL)
		{
			while(i--)
			{
				free(array[i]);
			}
			free(array);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
