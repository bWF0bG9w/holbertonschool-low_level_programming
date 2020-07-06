#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: arrays
 *
 * Return: number of coins
 */

int main(int argc, char *argv[])
{
	int coins = 0, sum;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]);
	if (sum < 0)
	{
		printf("0\n");
		return (0);
	}

	coins += sum / 25;
	sum %= 25;

	coins += sum / 10;
	sum %= 10;

	coins += sum /  5;
	sum %= 5;

	coins += sum / 2;
	sum %= 2;

	coins += sum / 1;
	sum %= 1;

	printf("%d\n", coins);
	return (0);

}
