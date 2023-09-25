#include "main.h"
/**
 * _memcpy -this function fills the memory area,
 * @dest: this is the destination memory area.
 * @src: this is the source memory area.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*(dest + a) =  *(src + a);

	return (dest);
}
