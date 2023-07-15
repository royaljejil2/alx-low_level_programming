#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @y: The number to be used
 * Return: Value of the last digit of a number
 */

int print_last_digit(int y)
{
	int last;

	last = y % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
