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
	int j = 0;

	while (dest[i])
		i++;

	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (0);
}
