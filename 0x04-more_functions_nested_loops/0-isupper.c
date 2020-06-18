#include "holberton.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: character
 * Retruns: 1 if uppercase, 0 is otherwise
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
		else
			return (0);
		}
