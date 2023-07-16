#include "main.h"
/**
 * print_diagonal - Print a diagonal line
 * @n: Input variable
 * Return: Void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
	}
	_putchar('\\');
	_putchar('\n');
}
