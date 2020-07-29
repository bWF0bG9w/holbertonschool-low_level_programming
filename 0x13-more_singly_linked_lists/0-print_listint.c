#include "lists.h"

/**
 * print_listint - print all elements of a list
 * @h: pointer to listint
 *
 * Return: nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{

		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);

}
