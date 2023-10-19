#include "lists.h"


/**
 * print_list - This function prints all the elements of a list_t list.
 * @h: This is singly linked list.
 *
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t nElements;
	int i;

	nElements = 0;
	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nElements++;
	}
	return (nElements);
}
