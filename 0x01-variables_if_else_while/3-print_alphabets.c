#include <unistd.h>

/**
 *main - prints the alphabet in lowercase and then in uppercase
 *Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c = c + 1;
	}
	c = 'A';
	while (c <= 'Z')
	{
		_putchar(c);
		c = c + 1;
	}
	_putchar('\n');
	return (0);
}
