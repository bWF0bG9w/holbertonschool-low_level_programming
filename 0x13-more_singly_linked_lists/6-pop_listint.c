#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to head
 *
 * Return: node data or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int a;

	if (*head == NULL)
       	{
		tmp = *head;
		a = tmp->n;
		*head = tmp->next;
		free(tmp);
		return (a);
	}
	return (0);
}
