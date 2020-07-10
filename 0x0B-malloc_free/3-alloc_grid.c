#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - creates 2D array of ints
 * @width: width of array
 * @height: height of array
 *
 * Return: array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int a, b;

	if (width < 1 || height < 1)
		return (NULL);

	array = malloc(sizeof(*array) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		array[a] = malloc(sizeof(*(array[a])) * width);
		if (array[a] == 0)
		{
			free(*array);
			free(array);
			return (NULL);
		}
	}

        for (b = 0; b < width; b++)
	{
	        array[a][b] = 0;
	}

	return (array);
}
