#include "lists.h"

/**
 * add_nodeint_end - This function adds a new node at
 * the end of a linked list
 * @head: This represents the head of a list.
 * @n: This represents the number of elements.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh;
	listint_t *real;

	(void)real;

	fresh = malloc(sizeof(listint_t));

	if (fresh == NULL)
		return (NULL);

	fresh->n = n;
	fresh->next = NULL;
	real = *head;
	if (*head == NULL)
	{
		*head = fresh;
	}
	else
	{
		while (real->next != NULL)
		{
			real = real->next;
		}
		real->next = fresh;
	}

	return (*head);
}
