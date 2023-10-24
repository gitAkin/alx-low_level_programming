#include "lists.h"

/**
 * free_listp - This function frees a linked list
 * @head: This represents the head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *now;
	listp_t *view;

	if (head != NULL)
	{
		view = *head;
		while ((now = view) != NULL)
		{
			now = view->next;
			free(view);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - This function prints a linked list.
 * @head:It represents the head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodal = 0;
	listp_t *poitr, *last, *add;

	poitr = NULL;
	while (head != NULL)
	{
		last = malloc(sizeof(listp_t));

		if (last == NULL)
			exit(98);

		last->p = (void *)head;
		last->next = poitr;
		poitr = last;

		add = poitr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&poitr);
				return (nodal);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodal++;
	}

	free_listp(&poitr);
	return (nodal);
}
