#include "main.h"
#include <stdlib.h>
/**
 * _strdup - This function returns a pointer to a newly allocated space in memory.
 * @str: This is string pointer.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *akin;
	unsigned int s, t;

	if (str == NULL)
		return (NULL);

	for (s = 0; str[s] != '\0'; s++);

	akin = (char *)malloc(sizeof(char) * (s + 1));

	if (akin == NULL)
		return (NULL);

	for (t = 0; t <= s; t++)
		akin[t] = str[t];

	return (akin);
}
