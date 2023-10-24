#include "lists.h"


/**
 * print_listint - This function prints all the elements of a list.
 * @h: This is the head of a list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodal = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodal++;
	}
	return (nodal);
}
