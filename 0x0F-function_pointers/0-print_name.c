#include "function_pointers.h"


/**
 * print_name - prints a name
 * @name: pointer to name
 * @f: pointer to func
 * Return: nothing
 */


void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;

		f(name);
}
