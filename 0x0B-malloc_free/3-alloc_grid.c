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
	int a, b;
	int **jey;

	if (width <= 0 || height <= 0)
		return (NULL);
	jey = malloc(sizeof(int *) * height);
	if (jey == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		jey[a] = malloc(sizeof(int) * width);

		if (jey[a] == NULL)
		{
			for (; a >= 0; a--)
				free(jey[a]);

			free(jey);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			jey[a][b] = 0;
	}
	return (jey);
}

