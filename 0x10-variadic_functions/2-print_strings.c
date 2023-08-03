#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line
 * @separator: The string to be printed between strings.
 * @n: number of strings to print
 * @...: The number of string variable to be printed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	size_t a;
	va_list strings;

	va_start(strings, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
