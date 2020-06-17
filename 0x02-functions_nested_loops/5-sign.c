#include "holberton.h"

/**
 * print_sign - prints if a number is +, -, or 0
 *@n: number
 *Return: 1 if positive, -1 if negative, 0 if zero
 */

int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
			return (1);
			}
	if (n <= -1)
	{
		_putchar('-');
			return (-1);
			}
	else
		_putchar(0);
			return (0);
}
