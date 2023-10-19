#include "lists.h"


/**
 * list_len - This function returns the number of elements in a list.
 * @h: This is pointer to singly linked list.
 *
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t nElements;
	int i;

	nElements = 0;
	for (i = 0; h != NULL; i++)
	{
		h = h->next;
		nElements++;
	}
	return (nElements);
}
