#include "lists.h"

/**
 * insert_nodeint_at_index - This function inserts a
 * new node at a given position.
 * @head: This represents the head of a list.
 * @idx: This is thr  index of the list where the new node is
 * added.
 * @n: This represents integer of an element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *fresh;
	listint_t *first;

	first = *head;

	if (idx != 0)
	{
		for (a = 0; a < idx - 1 && first != NULL; a++)
		{
			first = first->next;
		}
	}

	if (first == NULL && idx != 0)
		return (NULL);

	fresh = malloc(sizeof(listint_t));
	if (fresh == NULL)
		return (NULL);

	fresh->n = n;

	if (idx == 0)
	{
		fresh->next = *head;
		*head = fresh;
	}
	else
	{
		fresh->next = first->next;
		first->next = fresh;
	}

	return (fresh);
}
