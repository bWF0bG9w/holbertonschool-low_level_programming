#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @h: linked list
 *
 * Return: nodes
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
