#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 * Return: reverse string
 */

void print_rev(char *s)
{
	int length = 0;
	int r;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (r = 0; r < length; r++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
