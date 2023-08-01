#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which
 * is a duplicate of the string.
 * @str: input string
 * Return: Always (0)
 */

char *_strdup(char *str)
{
	unsigned int m, n;
	char *strdown;

	if (str == NULL)
		return (NULL);
	m = 0;
	while (str[m] != '\0')
		m++;
	strdown = (char *)malloc(sizeof(char) * (m + 1));
	if (strdown == NULL)
		return (NULL);
	for (n = 0; n <= m; n++)
		strdown[n] = str[n];
	return (strdown);
}
