#include "dog.h"
#include <stdio.h>

/**
 * new_dog - makes a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int ind;
	int cnt1 = 0, cnt2 = 0;
	char *n;
	char *o;
	dog_t *fido;

	for (ind = 0; name[ind] != '\0'; cnt1++, ind++)

		for (ind = 0; name[ind] != '\0'; cnt2++, ind++)

			n = malloc(sizeof(char) * (cnt1 + 1));

	if (n == NULL)
		return (NULL);

	o = malloc(sizeof(char) * (cnt2 + 1));
	
	if (n == NULL)
		return (NULL);
	fido = malloc(sizeof(dog_t));
	if (fido == NULL)
		return (NULL);

	ind = 0;

	while ((n[ind] = name[ind]) != '\0')
	{
		ind++;
	}
	ind = 0;

	while ((o[ind] = owner[ind]) != '\0')
	{
		ind++;
	}
	(*fido).name = n;
	(*fido).age = age;
	(*fido).owner = o;

	return (fido);
}
