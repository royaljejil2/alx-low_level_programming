#include "main.h"

/**
 * _strspn - A function that gets the lenght of a prefix substring.
 * @accept: The list to be measured.
 * @s: The string to be searched.
 * Return: The number of bytes in s which
 * consist of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int trust = 0;
	int obey;

	while (*s)
	{
		for (obey = 0; accept[obey]; obey++)
		{
			if (*s == accept[obey])
			{
				trust++;
				break;
			}
			else if (accept[obey + 1] == '\0')
				return (trust);
		}
		s++;
	}
	return (trust);
}
