#include "holberton.h"

/**
 * puts_half - prints a string
 * @str: string
 */

void puts_half(char *str)
{
	int length;
	int h;

	while (str[length])
		length++;

	if (length % 2 == 0)
		h = length / 2;
	else
		h = length + 1 / 2;
	while (h <= length)
		_putchar(str[h++]);

	_putchar(10);
}
