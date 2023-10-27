#include "main.h"

/**
 * set_bit - This function sets the value of a bit to 1
 * at a given index.
 * @n: This represents the pointer of an unsigned long int.
 * @index: This is the index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;
	*n = (*n | a);

	return (1);
}
