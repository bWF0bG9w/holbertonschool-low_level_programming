#include "holberton.h"

/**
 * _strncpy - combines two strings
 * @dest: destination
 * @src: source
 * @n: limiter number
 *
 * return: @src
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int n = 0;
	int r = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (o < n)
	{
		src[o] = dest[r];
		r++;
		o++;
	}
	return (src);
}
