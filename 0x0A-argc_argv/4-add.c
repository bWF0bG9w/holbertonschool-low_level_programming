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
	int sum = 0;

		for (a = 1; a < argc; a++)
		{
			for (b = 0; argv[a][b] != '\0'; b++)
			{
				if (argv[a][b] < '0' || argv[a][b] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	for (a = 1; a < argc; a++)
	{
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
