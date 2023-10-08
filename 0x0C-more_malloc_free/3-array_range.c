#include "main.h"
#include <stdlib.h>
/**
 * array_range - This function creates an array of integers.
 * @min: This is minimum value.
 * @max: This is maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *arra;
	int i;

	if (min > max)
		return (NULL);

	arra = malloc(sizeof(*arra) * ((max - min) + 1));

	if (arra == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arra[i] = min;

	return (arra);
}
