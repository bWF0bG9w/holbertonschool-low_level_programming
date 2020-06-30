#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: copied string
 * @src: string to copy
 * @n: max number of bytes
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	for ( ; a < n; a++)
		dest[a] = '\0';

	return (dest);
}
