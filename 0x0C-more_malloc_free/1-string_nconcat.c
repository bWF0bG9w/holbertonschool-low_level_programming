#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concats two strings
 * @s1: string 1
 * @s2: string 2
 * @n: limit
 * Return: new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a;
	unsigned int b;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = 0;
	while (s1[a] != '\0')
		a++;

	cat = malloc(sizeof(char) * (a + n + 1));
	if (cat == NULL)
		return (NULL);

	a = b = 0;
	while (s1[a] != '\0')
	{
		cat[a] = s1[a];
		a++;
	}
	while (b < n && s2[b] != '\0')
	{
		cat[a] = s2[b];
		a++, b++;
	}
	cat[a] = '\0';
	return (cat);
}
