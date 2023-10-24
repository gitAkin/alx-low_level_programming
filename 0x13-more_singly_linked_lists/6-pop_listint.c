#include "lists.h"

/**
 * pop_listint - This function deletes the head node of
 * a linked list
 * @head: Thhis represents the head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int nodal;
	listint_t *first;
	listint_t *view;

	if (*head == NULL)
		return (0);

	view = *head;

	nodal = view->n;

	first = view->next;

	free(view);

	*head = first;

	return (nodal);
}
