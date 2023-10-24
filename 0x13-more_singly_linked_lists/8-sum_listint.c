#include "lists.h"

/**
 * sum_listint - This function returns the sum of all the data
 * (n) of a linked list.
 * @head: This represents the head of a list.
 *
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int addition;

	addition = 0;
	while (head != NULL)
	{
		addition += head->n;
		head = head->next;
	}

	return (addition);
}
