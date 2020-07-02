#include "holberton.h"

/**
 * is_prime_number - tests if a number is prime
 * @n: number
 *
 *
 */

int is_prime_number(int n)
{
	if (n < 2 | n % 2 == 0)
		return (0);
	return (prime_finder(n, 3));
}
