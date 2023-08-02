#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-dimensional
 * array of integers
 *
 * @width: The width of the array
 * @height: The height of the array
 *
 * Return: a pointer to an array of integers.
 */

int **alloc_grid(int width, int height)
{
	int m, n;
	int **jey;

	if (width <= 0 || height <= 0)
		return (NULL);
	jey = malloc(height * sizeof(int *));
	if (jey == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < height; m++)
	{
		jey[m] = malloc(width * sizeof(int));
		if (jey[m] == NULL)
		{
			for (int i = 0; i < m; i++)
			{
				free(jey[i]);
			}
			free(jey);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
		for (n = 0; n < width; n++)
			jey[m][n] = 0;
	return (jey);
}

