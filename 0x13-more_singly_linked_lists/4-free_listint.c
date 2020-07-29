#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to head
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
