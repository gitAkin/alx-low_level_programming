#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - The function returns a pointer to a 2 dimensional array of integers.
 * @width: This is the width of the array.
 * @height: This is the height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **gridakin;
	int a, b;

	if (width < 1 || height < 1)
		return (NULL);

	gridakin = malloc(height * sizeof(int *));
	if (gridakin == NULL)
	{
		free(gridakin);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		gridakin[a] = malloc(width * sizeof(int));
		if (gridakin[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(gridakin[a]);
			free(gridakin);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			gridakin[a][b] = 0;

	return (gridakin);
}
