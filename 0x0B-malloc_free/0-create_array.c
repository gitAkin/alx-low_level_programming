#include "main.h"
#include <stdlib.h>
/**
 * create_array - This function creates an array of chars.
 * @size: This is size of the array.
 * @c: pointer with char data type
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(c) * size);

	if (a == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
		a[b] = c;

	return (a);
}
