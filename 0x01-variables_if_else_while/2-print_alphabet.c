#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - prints alphabet
 *
 * Return: 0
 */


int main(void)
{
	int a;

	for (a = 'a'; a < '{'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
