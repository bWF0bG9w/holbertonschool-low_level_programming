#include "lists.h"

/**
 * add_node - function that adds a new node at the head of list_t
 * @head: pointer to pointer
 * @str: string
 *
 * Return: address of new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	int a;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)

	add->str = strdup(str);
	if (add->str == NULL)
	{
		free(add);
		return (NULL);
	}

	add->len = a;
	add->next = *head;
	*head = add;

	return (*head);
}
