#include <stdio.h>
/**
 * main - Prints the add of the Finobacci numbers
 * Return: Always 0
 */

int main(void)
{
	int c;
	long int n1, n2, mf;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (c = 0; c < 48; c++)
	{
		mf = n1 + n2;
		printf(", %ld", mf);
		n1 = n2;
		n2 = mf;
	}
	printf("\n");
	return (0);
}
