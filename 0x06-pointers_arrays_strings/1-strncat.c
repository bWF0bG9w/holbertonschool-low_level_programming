#include "holberton.h"

/**
 * _strncat - combines two strings with pinters
 * @dest: destinatin
 * @src: source
 * @n: limiter number
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	int o = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while ((o < n) && (src[o] != '\0'))
		{
			dest[i] = src[o];
			o++;
			i++;
		}
		return (dest);
		}
