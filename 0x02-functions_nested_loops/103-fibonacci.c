#include <stdio.h>
/**
 * main - Prints the add of the even-vaulued fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	long int n, m, fn, afn;

	n = 1;
	m = 2;
	fn = afn = 0;
	while (fn <= 4000000)
	{
		fn = n + m;
		n = m;
		m = fn;
		if ((n % 2) == 0)
		{
			afn += n;
		}
	}
	printf("%ld\n", afn);
	return (0);
}
