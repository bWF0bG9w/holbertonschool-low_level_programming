#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: head of list
 * @n: value
 *
 * Return: address of the new element, or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = *head;
	*head = add;

	return (add);
}
