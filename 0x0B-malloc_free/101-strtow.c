#include "main.h"
#include <stdlib.h>

/**
 * count_word - This function counts the number of words in a string.
 * @s: this is a string to evaluate.
 *
 * Return: no return
 */
int count_word(char *s)
{
	int arc, e, d;

	arc = 0;
	d = 0;

	for(e = 0; s[e] != '\0'; e++)
	{
		if (s[e] == ' ')
			arc = 0;
		else if(arc == 0)
		{
			arc = 1;
			d++;
		}
	}
	return(d);
}
/**
 * strtow - This function splits a string into words.
 * @str: This is a string.
 *
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
	char **ptr1, *ptr2;
	int a, b = 0, length = 0, alph, c = 0, begin, finish;

	while (*(str + length))
		length++;
	alph = count_word(str);
	if (alph == 0)
		return (NULL);

	ptr1 = (char **) malloc(sizeof(char *) * (alph + 1));
	if (ptr1 == NULL)
		return (NULL);

	for (a = 0; a<= length; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				finish = a;
				ptr2 = (char *) malloc(sizeof(char) * (c + 1));
				if (ptr2 == NULL)
					return(NULL);
				while (begin < finish)
					*ptr2++ = str[begin++];
				*ptr2 = '\0';
				ptr1[b] = ptr2 - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			begin = a;
	}
	ptr1[b] = NULL;

	return (ptr1);
}
