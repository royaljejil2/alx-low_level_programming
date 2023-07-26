#include "main.h"

/**
 * *string_toupper - unction that changes all lowercase letters
 * of a string to uppercase.
 * @v: pointer to string
 * Return: pointer to uppercase string.
 */

char *string_toupper(char *v)
{
	int jey;
	jey = 0;

	while (v[jey] != '\0')
	{
		if (v[jey] >= 97 && v[jey] <= 122)
		{
			v[jey] = v[jey] - 32;
		}
		jey++;
	}
	return (v);
}
