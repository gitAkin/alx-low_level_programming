#include "lists.h"

/**
 * reverse_listint - This function reverses a linked list.
 * @head: This represets the head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *point;
	listint_t *new;

	point = NULL;
	new = NULL;

	while (*head != NULL)
	{
		new = (*head)->next;
		(*head)->next = point;
		point = *head;
		*head = new;
	}

	*head = point;
	return (*head);
}
