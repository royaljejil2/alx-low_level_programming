#include "variadic_functions.h"

/**
 * print_all - prints any argument provided to
 * a function
 * @format: list of types of arguments passed to the function
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	char *str, *sep = "";
	int a = 0;

	va_list toy;

	va_start(toy, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", sep, va_arg(toy, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(toy, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(toy, double));
					break;
				case 's':
					str = va_arg(toy, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
					default:
					a++;
					continue;
			}
			sep = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(toy);
}

