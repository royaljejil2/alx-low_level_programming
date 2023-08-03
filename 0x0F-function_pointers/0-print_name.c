#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: string to add
 * @f: variable to hold the string name
 * Return: Always (0)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
