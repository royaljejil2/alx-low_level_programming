#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 * @argc: The number of command line arguments
 * @argv: The array the contains the command line arguments
 * Return: Always (0)
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
