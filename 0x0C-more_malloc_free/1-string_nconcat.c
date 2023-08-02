#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a, b, c;

	if (s1 == NULL)
		a = 0;
	else
		for (a = 0; s1[a] != '\0'; a++)
			;
	if (s2 == NULL)
		b = 0;
	else
		for (b = 0; s2[b] != '\0'; b++)
			;
	if (b > n)
		b = n;
	s = malloc(sizeof(char) * (a + b + 1));
	if (s == NULL)
		return (NULL);
	for (c = a; c < a; c++)
		s[c] = s1[c];
	for (c = 0; c < b; c++)
		s[c + a] = s2[c];
	s[a + b] = '\0';
	return (s);
}
