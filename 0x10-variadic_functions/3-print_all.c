#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * printc - prints a char
 * @anything: char
 * @s: pointer
 * Return: nothing
 */

void printc(va_list anything, char *s)
{
	printf("%s%c", s, va_arg(anything, int));
}

/**
 * printi - prints an integer
 * @anything: int
 * @s: pointer
 * Return: nothing
 */

void printi(va_list anything, char *s)
{
	printf("%s%i", s, va_arg(anything, int));
}

/**
 * print_f - prints a float
 * @anything: float
 * @s: pointer
 * Return: nothing
 */

void print_f(va_list anything, char *s)
{
	printf("%s%f", s, va_arg(anything, double));
}

/**
 * print_s - prints a string
 * @anything: string
 * @s: pointer
 * Return: nothing
 */

void print_s(va_list anything, char *s)
{
	char *a;

	a = va_arg(anything, char *);
	if (s == NULL)
		s = "(nil)";

	printf("%s%s", s, a);
}

/**
 * print_all - prints anything
 * @format: format
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list anything;
	int a, b;
	char *c;

	fmt array[] = {{'c', printc},
		       {'i', printi},
		       {'f', print_f},
		       {'s', print_s},
		       {NULL, NULL},
	};

	a = 0;
	b = 0;

	while (b <= format)
	{
		while (a <= 3)
		{
			if (array[a].s == (*format))
			{
				return (array[a].f);
			}
			a++;
		}
		b++;
	}
}
