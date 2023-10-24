#include "lists.h"

/**
 * free_listint - This function frees a linked list
 * @head: This is the head of a list.
 *
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	listint_t *real;

	while ((real = head) != NULL)
	{
		head = head->next;
		free(real);
	}
}
