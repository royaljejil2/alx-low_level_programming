#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 * @c: The character to be located
 * @s: The string to be searched
 * Return: If c is not found -NULL, but if found,a pointer
 * to the first occurence
 */

char *_strchr(char *s, char c)
{
	int dulcie = 0;

	for (; s[dulcie] > '\0'; dulcie++)
	{
		if (s[dulcie] == c)
		{
			return (s + dulcie);
		}
	}
	return ('\0');
}
