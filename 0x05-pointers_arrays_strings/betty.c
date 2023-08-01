#include "main.h"

/**
 * _puts - function that prints...
 * return: void
 */

void _puts(char *str)
{
	int f = 0;

	for (f = 0; str[f] != '\0'; f++)
	{
		_putchar(str[f]);
	}
	_putchar('\n');
}
