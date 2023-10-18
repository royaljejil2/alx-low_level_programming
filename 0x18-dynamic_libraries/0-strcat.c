#include "main.h"

/**
 * _strcat - function tha concantenates two strings
 * @dest: destination string pointer
 * @src: source string pointer
 * Return: pointer to destination string.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
