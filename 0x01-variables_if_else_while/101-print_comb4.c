#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combos of three digits
 *
 *Return: 0
 */

int main(void)
{

	int a, b, c;

	for (a = '0'; a < '8'; a++)
	{

		for (b = a + 1; b < '9'; b++)
		{
			for (c = b + 1; c < ':'; c++)
			{

				if (a != b && a != c && b != c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (!(a == '7' && b == '8' && c == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
