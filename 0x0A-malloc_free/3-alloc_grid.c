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
	int i = 0;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = calloc(height, sizeof(int *));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = calloc(width, sizeof(int));

		if (array[i] == NULL)
		{
			while (i--)
			{
				free(array[i]);
			}
			free(array);
		}
	}

	return (array);
}
