#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns summ of all parameters
 * @n:
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list param;

	if (n == 0)
		return (0);

	va_start(param, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(param, int);
	}

	va_end(param);

	return (sum);

}
