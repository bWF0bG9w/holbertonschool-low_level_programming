#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a func given as a parameter
 * @array: array to func
 * @size: size of array
 * @action: func
 * Return: nothing
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL)
	{

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
