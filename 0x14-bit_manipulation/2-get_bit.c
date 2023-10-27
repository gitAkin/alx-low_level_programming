#include "main.h"

/**
 * get_bit - This function returns the value of a bit at a given
 * index.
 * @n: This represents an unsigned long int input.
 * @index: this is the index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (n == 0 && index < 64)
		return (0);

	for (a = 0; a <= 63; n >>= 1, a++)
	{
		if (index == a)
		{
			return (n & 1);
		}
	}

	return (-1);
}
