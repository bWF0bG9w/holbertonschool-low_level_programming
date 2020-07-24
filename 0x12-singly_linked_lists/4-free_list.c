#include "lists.h"

/**
 * free_list - frees a list
 * @head: list head
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;
	head = head;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(str);
	}
}
