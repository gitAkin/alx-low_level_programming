#include "lists.h"

/**
 * add_nodeint - This function adds a new node at the
 * beginning of a linked list
 * @head: This represents the head of a list.
 * @n: This represents the number of element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));

	if (fresh == NULL)
		return (NULL);

	fresh->n = n;
	fresh->next = *head;
	*head = fresh;

	return (*head);
}
