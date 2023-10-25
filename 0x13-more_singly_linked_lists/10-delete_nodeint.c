#include "lists.h"

/**
 * delete_nodeint_at_index - This function deletes the node at
 * index of a linked list.
 * @head: This represents the head of a list.
 * @index: this is the index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *bfore;
	listint_t *after;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		after = *head;
		*head = after->next;
		free(after);
		return (1);
	}

	bfore = *head;

	for (a = 0; a < index - 1 && bfore != NULL; a++)
	{
		bfore = bfore->next;
	}

	if (bfore == NULL || bfore->next == NULL)
		return (-1);

	after = bfore->next;
	bfore->next = after->next;
	free(after);

	return (1);
}
