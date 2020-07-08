#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: characters
 *
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *array;

	if (size < 1)
		return (0);

	array = malloc(size * sizeof(char));
	if (array == 0)
		return (0);

	for (a = 0; a < size; a++)
	{
		array[a] = c;
	}
	array[a] = c;
	return (array);
}
