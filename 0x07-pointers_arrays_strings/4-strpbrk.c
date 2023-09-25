#include "main.h"

/**
 * _strpbrk - This function locates multiple characters in a string.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, k;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		for (k = 0; *(accept + k) != '\0'; k++)
		{
			if (*(s + a) == *(accept + k))
				return (s + a);
		}
	}
	return ('\0');
}
