#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: size of array
 * @size: bytes of array
 *
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int a;

	if (nmemb < 1 || size < 1)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		array[a] = 0;

	return (array);
}
