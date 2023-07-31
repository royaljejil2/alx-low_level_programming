#include "main.h"

/**
 * _memset -function that fills memory with a constant byte
 * @s: the memory area to be fillied
 * @b: char to copy
 * @n: number of lines to copy b
 * Return: pointer to the memory ares s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;
	for (; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
