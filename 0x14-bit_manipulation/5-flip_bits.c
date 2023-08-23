#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: The first number
 * @m: The second number
 * Return: The number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index, count = 0;
	unsigned long int present;
	unsigned long int special = n ^ m;

	for (index = 63; index >= 0; index--)
	{
		present = special >> index;
		if (present & 1)
			count++;
	}

	return (count);
}

