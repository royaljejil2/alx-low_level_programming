#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 * Return: A pointer to the first occurrence in @s of any character from
 * @accept, or NULL if no match is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int pace = 0;

	while (*s)
	{
		for (; accept[pace]; pace++)
		{
			if (*s == accept[pace])
				return (s);
		}
		s++;
	}
	return ('\0');
}
