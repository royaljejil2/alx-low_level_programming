#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: destination string po.inter
 * @src: source string pointer.
 * @n: number of bytes to be used.
 * Return: pointer to destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int dulcie;

	for (dulcie = 0; dulcie < n && src[dulcie] != '\0'; dulcie++)
	{
		dest[dulcie] = src[dulcie];
	}
	for (; dulcie < n; dulcie++)
	{
		dest[dulcie] = '\0';
	}
	return (dest);
}
