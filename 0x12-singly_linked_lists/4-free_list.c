#include "lists.h"

/**
 * free_list - This function frees a list
 * @head: This represents head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *new;

	while ((new = head) != NULL)
	{
		new = head->next;
		free(new->str);
		free(new);
	}
}
