#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_pal - compare each character of the string
 * @s: string to check
 * @i: iterator
 * @len: lenght of the string
 * Return: int
 */

int compare_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (compare_pal(s, i + 1, len - 1));
}

/**
 * is_palindrome - detects if a string in a palindrome
 * @s: string to reverse
 * Return: 1 if it is a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (compare_pal(s, 0, _strlen_recursion(s)));
}
