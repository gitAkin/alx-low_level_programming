#include "lists.h"

/**
 * listint_len - This function returns the number of
 * elements in a linked list.
 * @h: This represents the head of a list.
 *
 * Return: the numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodal = 0;

	while (h != NULL)
	{
		h = h->next;
		nodal++;
	}
	return (nodal);
}
