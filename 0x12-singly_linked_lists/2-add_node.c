#include "lists.h"


/**
 * add_node - This function adds a new node at the beginning
 * of a list_t list.
 * @head: This the the head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *akin;
	size_t akins;

	akin = malloc(sizeof(list_t));
	if (akin == NULL)
		return (NULL);

	akin->str = strdup(str);

	for (akins = 0; str[akins]; akins++)
		;

	akin->len = akins;
	akin->next = *head;
	*head = akin;

	return (*head);
}
