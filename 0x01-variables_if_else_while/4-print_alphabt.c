#include <unistd.h>

/**
 * main - prints the alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
	_putchar(c);
		}
		c = c + 1;
	}
	_putchar('\n');
	return (0);
}
