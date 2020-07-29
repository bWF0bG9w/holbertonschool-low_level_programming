#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of the list
 * @head: head of list
 * @n: value
 *
 * Return: address of new element or NULL if failed
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *a = *head;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (*head);
	}

	while (a->next != NULL)
	{
		a = a->next;
	}
	a->next = add;
	return (*head);
}
