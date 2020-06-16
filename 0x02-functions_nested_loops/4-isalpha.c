#include "holberton.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: test character
 * Return: 1 if true, 0 if false
 */

int _isalpha(int c)
{
	if ((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a'))
	return (1);
	else
		return (0);
}
