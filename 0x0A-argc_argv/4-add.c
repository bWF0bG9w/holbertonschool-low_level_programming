#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two numbers
 * @argv: arguments
 * @argc: arrays
 *
 * Return: result
 */

int main(int argc, char *argv[])
{
	int a, b;


	if (argc <= 0)
	{
		return (0);
	}

	if (argv[a][b] < '0' || argv[a][b] > '9')
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a + b);
	return (0);
}
