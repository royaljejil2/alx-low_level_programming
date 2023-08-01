#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific cahr.
 *
 * @size: input for the size of the array in int
 * @c: storage for the strings of character
 * Return: a pointer to the base character c
 */

char *create_array(unsigned int size, char c)
{
	unsigned int m;
	char *pointer;

	if (size == 0)
		return (NULL);
	pointer = malloc(sizeof(char) * size);
	if (pointer == NULL)
		return (NULL);
	for (m = 0; m < size; m++)
		pointer[m] = c;
	return (pointer);
}
