#include "holberton.h"

/**
 * _strcat - appends the src string to the dest string
 * @dest: destination
 * @src: source
 * Return: pointer to string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int n = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (n = 0; src[n] != '\0'; n++, i++)
	{
		dest[i] = src[n];
	}

	dest[i] = '\0';

	return (0);
}
