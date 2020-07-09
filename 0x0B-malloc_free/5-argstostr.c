#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concats all arguments
 * @ac: argumnets
 * @av: strings to concat
 *
 * Return: new string
 */

char *argstostr(int ac, char **av)
{
	int a, b;
	int k = 0, len = 0;
	char *cat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			len++;
		len++;
	}
	len++;
	cat = malloc(sizeof(char) * len);
	if (cat == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			cat[k++] = av[a][b];
		}
		cat[k++] = '\n';
	}
	cat[k] = '\0';
	return (cat);
}
