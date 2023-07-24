#include "main.h"

/**
 * swap_int - takes in two variables integers and swaps them
 * @a: swaps and stoes values of b
 * @b: swaps and stores values of a
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
