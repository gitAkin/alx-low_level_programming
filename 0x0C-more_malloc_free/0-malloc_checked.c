#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - This function allocates memory.
 * @b: This is the amount of bytes needed.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
