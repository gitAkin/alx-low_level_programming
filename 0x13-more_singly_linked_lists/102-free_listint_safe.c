#include "lists.h"

/**
 * free_listp2 - This function frees a linked list
 * @head:This represents a  head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *now;
	listp_t *view;

	if (head != NULL)
	{
		view = *head;
		while ((now = view) != NULL)
		{
			view = view->next;
			free(now);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *poitr, *last, *add;
	listint_t *view;

	poitr = NULL;
	while (*h != NULL)
	{
		last = malloc(sizeof(listp_t));

		if (last == NULL)
			exit(98);

		last->p = (void *)*h;
		last->next = poitr;
		poitr = last;

		add = poitr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&poitr);
				return (nodal);
			}
		}

		view = *h;
		*h = (*h)->next;
		free(view);
		nodal++;
	}

	*h = NULL;
	free_listp2(&poitr);
	return (nodal);
}
