#include "main.h"
/**
 * main - Entry point
 * Description: "Write a function that prints the alphabet, in lowercase, followed by a new line."
 * Return: void
 */
void print_alphabet(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
