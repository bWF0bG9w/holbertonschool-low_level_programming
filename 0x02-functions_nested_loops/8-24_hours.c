#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: end
 */

void jack_bauer(void)
{
	int h, m, d;

	h = 0;
	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			d = h / 10;
			_putchar('0' + d);
			d = h % 10;
			_putchar('0' + d);
			_putchar(':');
			d = m / 10;
			_putchar('0' + d);
			d = m % 10;
			_putchar('0' + d);
			_putchar('\n');
			m++;
		}
	}
}
