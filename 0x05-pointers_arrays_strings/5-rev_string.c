#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	int r, c;
	char *a, *b, temp;

	for (r = 0; s[r] != '\0'; r++)
	{

	}
	a = s;
	b = s;

	for (c = 0; c < r - 1; c++)
	{
		b++;
	}

	for (c = 0; c < r / 2; c++)
	{
		temp = *b;
		*b = *a;
		*a = temp;

		a++;
		b--;
	}
	}
