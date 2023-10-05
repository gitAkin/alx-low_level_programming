#include "main.h"
#include <stdlib.h>

/**
 * argstostr - This functoin concatenates all the arguments of a program.
 * @ac: This is argument count.
 * @av: This argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *akin;
	int c, a, b, d;

	if (ac == 0)
		return (NULL);

	for (c = a = 0; a < ac; a++)
	{
		if (av[a] == NULL)
			return (NULL);

		for (b = 0; av[a][b] != '\0'; b++)
			c++;
		c++;
	}

	akin = malloc((c + 1) * sizeof(char));

	if (akin == NULL)
	{
		free(akin);
		return (NULL);
	}

	for (a = b = d = 0; d < c; b++, d++)
	{
		if (av[a][b] == '\0')
		{
			akin[d] = '\n';
			a++;
			d++;
			b = 0;
		}
		if (d < c - 1)
			akin[d] = av[a][b];
	}
	akin[d] = '\0';

	return (akin);
}
