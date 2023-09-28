#include "main.h"

/**
 * wildcmp - This function compares two strings.
 * @k1: string 1.
 * @k2: string 2. It can contains a * as a special character.
 * Return: 1 if are identical, 0 if not.
 */
int wildcmp(char *k1, char *k2)
{
	if (*k2 == '*' && *(k2 + 1) != '\0' && *k1 == '\0')
		return (0);
	if (*k1 == '\0' && *k2 == '\0')
		return (1);
	if (*k1 == *k2)
		return (wildcmp(k1 + 1, k2 + 1));
	if (*k2 == '*')
		return (wildcmp(k1, k2 + 1) || wildcmp(k1 + 1, k2));
	return (0);
}
