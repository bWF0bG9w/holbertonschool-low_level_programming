#include "holberton.h"

/**
 * puts2 - prints every other charater of a string
 * @str: string
 * Return: nothing
 */

void puts2(char *str)
{
	int a;
	char b;

	for (a = 0; str[a] != 0; a++)
	{
		if (a % 2 == 0)
		{
			b = str[a];
			_putchar(b);
		}
	}
	_putchar('\n');
}
