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
	int len =0, k = 0;
	char *cat;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		while (av[a][len] != 0)
		{
			len++;
		}
	}
	len++;
	cat = malloc(sizeof(char) * len);
	for (a = 0; a < ac; a++)
	{
		while (av[a][b] != 0)
		{
			cat[k] = av[a][b];
			k++;
			b++;
		}
		cat[k] = '\n';
		k++;
		b = 0;
	}
	cat[k] = '\0';
	return (cat);
}
