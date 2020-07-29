#include "lists.h"

/**
 * listint_len - returns the numbers of elements in a linked list
 * @h: pointer to list
 *
 * Return: elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{

		h = h->next;
		elements++;
	}
	return (elements);
}
