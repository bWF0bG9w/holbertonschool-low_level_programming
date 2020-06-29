#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the alphabet in lowercase and then in uppercase
 *Return: 0
 */


int main(void)
{
	int a;

	for (a = 'a'; a < '{'; a++)
		putchar(a);

	for (a = 'A'; a < '['; a++)
		putchar(a);

	putchar('\n');

	return (0);
}
