#include "holberton.h"

/**
 * set_bit - sets value of a bit to 1 ar a given index
 * @n: integer
 * @index: index
 *
 * Return: 1 if it worked, -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
