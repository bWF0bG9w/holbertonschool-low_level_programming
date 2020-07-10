#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates and array of integers from min to max
 * @min: minimum int in array
 * @max: maximum int in array
 *
 * Return: array
 */

int *array_range(int min, int max)
{
	int *array;
	int a, b;

	if (min > max)
		return (NULL);

	b = (max - min) + 1;

	array = malloc(b * sizeof(*array));
	if (array == NULL)
		return (NULL);

	for (a = 0; a < b; a++)
		array[a] = min + a;

	return (array);
}
