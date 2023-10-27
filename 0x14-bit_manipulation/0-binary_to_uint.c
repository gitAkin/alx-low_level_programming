#include "main.h"

/**
 * binary_to_uint - This function converts a binary number to an
 * unsigned int.
 * @b: This represents a binary.
 *
 * Return: an unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unsint;
	int lent, base2;

	if (!b)
		return (0);

	unsint = 0;

	for (lent = 0; b[lent] != '\0'; lent++)
		;

	for (lent--, base2 = 1; lent >= 0; lent--, base2 *= 2)
	{
		if (b[lent] != '0' && b[lent] != '1')
		{
			return (0);
		}

		if (b[lent] & 1)
		{
			unsint += base2;
		}
	}

	return (unsint);
}
