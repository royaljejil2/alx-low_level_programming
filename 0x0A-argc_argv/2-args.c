#include <stdio.h>

/**
 * main - This prints all arguments it receives
 * @argc: The number of command line argument
 * @argv: The array that contains the programe command
 * line arguments
 * Return: Always (0)
 */

int main(int argc, char **argv)
{
	int n = 0;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
