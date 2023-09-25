#include "main.h"
/**
 * _memset - function that fills memory with a constant byte,
 * @s: this returns a pointer to the memory area.
 * @b: this is the constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*(s + a) =  b;

	return (s);
}
