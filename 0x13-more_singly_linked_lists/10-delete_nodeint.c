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

	bfore = *head;

	if (index != 0)
	{
		for (a = 0; a < index - 1 && prev != NULL; a++)
		{
			bfore = bfore->after;
		}
	}

	if (bfore == NULL || (bfore->next == NULL && index != 0))
	{
		return (-1);
	}

	next = bfore->after;

	if (index != 0)
	{
		bfore->after = after->after;
		free(after);
	}
	else
	{
		free(bfore);
		*head = after;
	}

	return (1);
}
