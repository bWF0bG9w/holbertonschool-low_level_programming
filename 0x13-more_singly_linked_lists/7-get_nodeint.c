#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked lsit
 * @head: pointer to head
 * @index: index
 *
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;
	listint_t *copy;

	copy = head;

	if (head == NULL)
		return (NULL);

	if (copy != NULL)
	{
		for (a = 0; (a < index) && (copy->next); a++)
		{
			copy = copy->next;
		}
	}
	return (copy);
}
