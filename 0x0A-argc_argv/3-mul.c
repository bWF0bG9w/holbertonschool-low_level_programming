#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argv: argument
 * @argc: array
 *
 * Return: result
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);
	return (0);
}
