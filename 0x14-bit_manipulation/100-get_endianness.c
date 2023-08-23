#include "main.h"
#include <stddef.h>

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	size_t index = 1;
	char *toy = (char *) &index;

	return (*toy);
}

