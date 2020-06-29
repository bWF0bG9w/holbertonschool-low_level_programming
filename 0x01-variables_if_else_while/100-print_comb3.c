#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all combinations of 2 numbers
 * Return:
 */

int main(void)
{

	int a, b;
	int c = 0;

	for (a = '0'; a <= '9'; a++)
	{

		for (b = '0' + c; b < '9'; b++)
		{
			if (a != b)
			{
				putchar(a);
				putchar(b);
			}
