#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: inputs
 * @argv: array
 * Return: 0
 *
 */

int main(int argc, char *argv[])
{
	argc = argc;
	printf("%s\n", *argv++);
	return (0);
}
