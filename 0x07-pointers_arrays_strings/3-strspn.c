#include "main.h"

/**
 * _strspn - This function  gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, k, bool;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		bool = 1;
		for (k = 0; *(accept + k) != '\0'; k++)
		{
			if (*(s + a) == *(accept + k))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (a);
}
