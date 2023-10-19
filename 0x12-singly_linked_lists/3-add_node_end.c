#include "lists.h"

/**
 * add_node_end - This function adds a new node at the end
 * of a list_t list.
 * @head: This represents the head of the linked list.
 * @str: string to store in the list.
 *
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *akin, *temp;
	size_t akins;

	akin = malloc(sizeof(list_t));
	if (akin == NULL)
		return (NULL);

	akin->str = strdup(str);

	for (akins = 0; str[akins]; akins++)
		;

	akin->len = akins;
	akin->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = akin;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = akin;
	}

	return (*head);
}
