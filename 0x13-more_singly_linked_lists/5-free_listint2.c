#include "lists.h"

/**
 * free_listint2 - This function frees a linked list
 * @head: This is the head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *real;
	listint_t *view;

	if (head != NULL)
	{
		view = *head;
		while ((real = view) != NULL)
		{
			view = view->next;
			free(real);
		}
		*head = NULL;
	}
}
