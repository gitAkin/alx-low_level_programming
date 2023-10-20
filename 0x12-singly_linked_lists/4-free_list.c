#include "lists.h"

/**
 * free_list - This function frees a list
 * @head: This represents head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *akin;

	while ((akin = head) != NULL)
	{
		akin = head;
		head = head->next;
		free(akin->str);
		free(akin);
	}
	free(head);
	head = NULL;
}
