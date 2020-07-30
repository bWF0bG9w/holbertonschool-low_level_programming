#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n:
 * @index: index
 *
 * Return: the value of the bit at index or -1 if an error occurs
 */


int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	if ((n >> index) & 1)
		return (1);

	else
		return (0);
}
