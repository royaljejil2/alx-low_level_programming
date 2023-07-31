#include <stdio.h>

/**
 * print_diagsums - Function that prints the sum of the
 * two diagonals of a square matrix of integers
 *
 * @a: The matrix of integers
 * @size: The size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[1];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 -= a[i];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
