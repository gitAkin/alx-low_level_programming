#include "main.h"
#include <stdlib.h>

/**
 * str_concat - This finction concatenates two strings.
 * @s1: This the first string.
 * @s2: This the second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *akin;
	unsigned int a, b, c, restrit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (j = 0; s2[j] != '\0'; b++)
		;

	akin = malloc(sizeof(char) * (a + b + 1));

	if (akin == NULL)
	{
		free(akin);
		return (NULL);
	}

	for (c = 0; c < a; c++)
		akin[c] = s1[c];

	restrit = b;
	for (b = 0; b <= restrit; k++, b++)
		akin[c] = s2[b];

	return (akin);
}
