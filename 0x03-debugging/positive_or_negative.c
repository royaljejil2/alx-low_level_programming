#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: "Kindly check if number is positive or negative"
 * Return: Always return 0 (Success)
 */

void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return;
}
