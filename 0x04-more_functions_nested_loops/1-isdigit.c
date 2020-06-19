#include "holberton.h"

/**
 * _isdigit - checks for a digtit
 * @c: character
 * Return: 1 if digit present, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
		else
			return (0);
}
