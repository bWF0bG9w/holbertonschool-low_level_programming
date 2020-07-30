#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n:integer 
 * @index: index
 *
 * Return: 1 if worked or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
