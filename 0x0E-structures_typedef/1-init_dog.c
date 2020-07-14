#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - inits values for dog struct
 * @d: dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: nothing
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

		d->name = name;
		d->age = age;
		d->owner = owner;

}
