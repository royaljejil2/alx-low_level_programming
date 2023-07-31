#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 * Return: Always (0)
 */

char *_strpbrk(char *s, char *accept)
{
	int index = 0;

	while (*s)
	{
		for (; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
