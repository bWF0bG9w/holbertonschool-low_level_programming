#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: new string
 */

char *str_concat(char *s1, char *s2)
{
	int a;
	int length1 = 0, length2 = 0, b = 0;
	char *array;

	if (s1 != NULL)
	{
		while (s1[length1] != 0)
			length1++;
	}

	if (s2 != NULL)
	{
		while (s2[length2] != 0)
			length2++;
	}

	array = malloc((length1 + length2 + 1) * (sizeof(char)));
	if (array == NULL)
		return (NULL);

	for (a = 0; a < length1; a++)
	{
		array[b] = s1[a];
		b++;
	}

	for (a = 0; a < length2; a++)
	{
		array[b] = s2[a];
		b++;
	}
	return (array);
}
