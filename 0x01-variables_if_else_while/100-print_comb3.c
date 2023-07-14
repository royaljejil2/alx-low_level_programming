#include <stdio.h>
/**
 * main - Entry point
 * Description: "The more brains you use, the less material you need"
 * Return: Always 0
 */
int main(void)
{
	int n, m;

	n = '0';
	m = '0';

	while (n <= '9')
	{
		while (m <= '9')
		{
			if (n < m)
			{
				putchar(n);
				putchar(m);
				if (n != '8' || (n == '8' && m != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;
		}
		n++;
		m = '0';
	}
	putchar('\n');
	return (0);
}
