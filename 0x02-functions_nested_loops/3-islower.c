#include "holberton.h"

/**
 * _islower - checks for lowercase charcters
 * @c: checked character
 * Return: 0 if false, 1 if true
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	return (1);
	else
		return (0);
}
