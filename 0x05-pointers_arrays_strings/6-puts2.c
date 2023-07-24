#include "main.h"

/**
 * puts2 - prints characters of a string
 * @str: the used string reference
 * Return: 0
 */

void puts2(char *str)
{
	int r = 0;

	while (str[r] != '\0')
	{
		if (r %  2 == 0)
		{
			_putchar(str[r]);
		}
		r++;
	}
	_putchar('\n');
}
