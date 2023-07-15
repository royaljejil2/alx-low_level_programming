#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @v: The number to be checked.
 * Return: 1 for positive num, -1 for negative numver or zero for anythin else.
 */

int print_sign(int v)
{
	if (v > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (v < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
