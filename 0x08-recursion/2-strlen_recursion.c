#include "holberton.h"

/**
 * _strlen_recursion - length of string
 * @s: string
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{

	if (*s)
		return (1 + _strlen_recursions(s + 1));
	else
		return (0);
}
