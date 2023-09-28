#include "main.h"

/**
 * _strlen_recursion - This function  returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - this function compares each character of the string.
 * @s: string
 * @p1: smallest iterator.
 * @p2: biggest iterator.
 * Return: .
 */
int comparator(char *s, int p1, int p2)
{
	if (*(s + p1) == *(s + p2))
	{
		if (p1 == p2 || p1 == p2 + 1)
			return (1);
		return (0 + comparator(s, p1 + 1, p2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - This function detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
