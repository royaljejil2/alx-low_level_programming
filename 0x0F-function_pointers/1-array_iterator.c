#include "function_pointers.h"

/**
 * array_iterator - iterates through an array
 * @array: target array
 * @size: array size
 * @action: function pointer to array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array == NULL || action == NULL)
		return;
	for (n = 0; n < size; n++)
		action(array[n]);
}
