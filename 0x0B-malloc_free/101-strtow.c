#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - This function frees a 2 dimensional array.
 * @grid: This is a multidimensional array of char.
 * @height: This is the height of the array.
 *
 * Return: no return
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - This fuunction splits a string into words.
 * @str: This is a string.
 *
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
	char **argout;
	unsigned int c, height, a, b, d;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	argout = malloc((height + 1) * sizeof(char *));
	if (argout == NULL || height == 0)
	{
		free(argout);
		return (NULL);
	}
	for (a = d = 0; a < height; a++)
	{
		for (c = d; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				d++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				argout[d] = malloc((c - d + 2) * sizeof(char));
				if (argout[a] == NULL)
				{
					ch_free_grid(argout, a);
					return (NULL);
				}
				break;
			}
		}
		for (b = 0; d <= c; d++, b++)
			argout[a] [b] = str[d];
		argout[a][b] = '\0';
	}
	argout[a] = NULL;
	return (argout);
}
