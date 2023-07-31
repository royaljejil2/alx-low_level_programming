#include "main.h"

/**
 * prime_digit - Calculate if its prime
 * @n: input
 * @i: iterator
 * Return: 1 if n is prime, and 0 if not
 */

int prime_digit(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_digit(n, i - 1));
}

/**
 * is_prime_number - determins whether an interger is a prime number
 * or not
 * @n: number to evaluate
 * Return: Always (0)
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_digit(n, n - 1));
}
