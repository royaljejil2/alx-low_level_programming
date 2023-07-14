#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: "Software is eating the World"
 */
int main(void)
{
	int n, m;
	int a, b, c, d;

	for (n = 0; n < 100; n++)
	{
		a = n / 10;
		b = n % 10;

		for (m = 0; m < 100; m++)
		{
			c = m / 10;
			d = m % 10;

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
