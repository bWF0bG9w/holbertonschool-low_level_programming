#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount of money
 * @argv: argument
 * @argc: arrays
 *
 * Return: number of coins
 */

int main(int argc, char *argv[])
{
	int coins = 0;

	int sum = argv[1];

	coins += sum / 25;
	sum %= 25;

	coins += sum / 10;
	sum %= 10;

	coins += sum /  5;
	sum %= 5;

	coins += sum / 2;
	sum %= 2;

	coins += sum / 1;

	printf("%d\n", coins);
	return (0);

}
