#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - This function concatenates two strings.
 * @s1: This is the first string.
 * @s2: This is the second string.
 * @n: The amount of needed bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *akinout;
	unsigned int as1, bs2, akinsout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (as1 = 0; s1[as1] != '\0'; as1++)
		;

	for (bs2 = 0; s2[bs2] != '\0'; bs2++)
		;

	if (n > bs2)
		n = bs2;

	akinsout = as1 + n;

	akinout = malloc(akinsout + 1);

	if (akinout == NULL)
		return (NULL);

	for (i = 0; i < akinsout; i++)
		if (i < as1)
			akinout[i] = s1[i];
		else
			akinout[i] = s2[i - as1];

	akinout[i] = '\0';

	return (akinout);
}
