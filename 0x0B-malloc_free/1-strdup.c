#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to dup
 *
 * Return: string
 */

char *_strdup(char *str)
{
	char *array;
	int size = 0;
	int a;

	if (str == NULL)
		return (NULL);

	while (str[size] != 0)
	{
		size++;
	}
	size++;
	array = malloc(size * (sizeof(char)));
		if (array == NULL)
			return (NULL);
		for (a = 0; a < size; a++)
	{
		array[a] = str[a];
	}
return (array);
}
