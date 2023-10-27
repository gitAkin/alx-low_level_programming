#include "main.h"

/**
 * get_endianness - This function checks the endianness
 *
 * Return: 0 if big endianess, 1 if little endianess
 */
int get_endianness(void)
{
	unsigned int a;
	char *b;

	a = 1;
	b = (char *) &a;

	return ((int)*b);
}
