#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: The number of parameters passed to the function
 * @...: The number of parameters to calculate the sum of
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list bemp;
	unsigned int sum = 0;
	unsigned int a;

	va_start(bemp, n);

	for (a = 0; a < n; a++)
	{
		sum += va_arg(bemp, int);
	}
	va_end(bemp);
	return (sum);
}
