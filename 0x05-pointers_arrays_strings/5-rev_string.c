#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: pointer pointing to the string
 * Return: Always 0
 */

void rev_string(char *s)
{
	int length, k, half;
	char temp;

	for  (length = 0; s[length] != '\0'; length++)
	;
	k = 0;
	half = length / 2;

	while (half--)
	{
		temp = s[length - k - 1];
		s[length - k - 1] = s[k];
		s[k] = temp;
		k++;
	}
}
