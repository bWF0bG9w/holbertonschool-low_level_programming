#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet 10
 * times in lowercase
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int n;
	char a;

	for (n = 0; n < 10; n++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
