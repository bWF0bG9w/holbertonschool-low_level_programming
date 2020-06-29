#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - print all combinations of 2 numbers
 * Return: 0
 */

int main(void)
{

	int a, b;
	int c = 0;

	for (a = '0'; a <= ':'; a++)
	{

		for (b = '1' + c; b < ':'; b++)
		{
			if (a != b)
			{
				putchar(a);
				putchar(b);
			}
			if (!(a == '8' && b == '9'))
			{
				putchar(44);
				putchar(32);
			}

		}
		c++;
	}

	putchar('\n');

	return (0);
}
