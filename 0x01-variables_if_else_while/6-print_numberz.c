#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints single digits of base 10
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = '0'; a < ':'; a++)
		putchar(a);

	putchar('\n');

	return (0);
}
