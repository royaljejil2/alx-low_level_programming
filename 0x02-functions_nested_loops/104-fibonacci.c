#include <stdio.h>
/**
 * main - Prints the first 98  Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int c, bool1, bool2;
	long int n1 = 1, n2 = 2, fn, fn2, n11, n22;

	bool1 = bool2 = 1;
	printf("%ld, %ld", n1, n2);
	for (c = 0; c < 96; c++)
	{
		if (bool1)
		{
			fn = n1 + n2;
			printf(", %ld", fn);
			n1 = n2;
			n2 = fn;
		}
		else
		{
			if (bool2)
			{
				n11 = n1 % 1000000000;
				n22 = n2 % 1000000000;
				n1 = n1 / 1000000000;
				n2 = n2 / 1000000000;
				bool2 = 0;
			}
			else
			{
				fn2 = (n11 + n22);
				fn = n1 + n2 + (fn2 / 1000000000);
				printf(", %ld, %ld", fn, fn2 % 1000000000);
				n1 = n2;
				n11 = n22
				n2 = fn;
				n22 = (fn2 % 1000000000);
			}
		}
		bool1 = !bool1;
	}
	putchar('\n');
	return (0);
}
