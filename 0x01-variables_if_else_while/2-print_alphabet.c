#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet
 *
 * Return: 0
 */


int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			_putchar(c);
		}
		c = c + 1;
	}
	_putchar('\n');
	return (0);
}
