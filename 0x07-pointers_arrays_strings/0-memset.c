#include "holberton.h"

/**
 * _memset - fills memmory with a constant byte
 * @s: given string
 * @b: char
 * @n: number of bytes
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int length = 0;

	while (length < n)
	{
		s[length] = b;
		length++;
	}

	return (s);
}
