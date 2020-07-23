#include "lists.h"

/**
 * print_list - prints all the elements of list_t
 * @h: linked list
 *
 * Return: nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%i%s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
