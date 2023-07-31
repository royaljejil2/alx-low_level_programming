#include "main.h"
/**
 * _sqrt_jey - recurses to find the natural square root of a number
 * @w: number to calculate the square root
 * @z: iterator
 * Return: the resulting square root
 */

int sqrt_jey(int w, int z)
{
	if (z * z > w)
		return (-1);
	if (z * z == w)
		return (z);
	return (sqrt_jey(w, z + 1));
}

#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the input number
 * Return: the resulting square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_jey(n, 0));
}
