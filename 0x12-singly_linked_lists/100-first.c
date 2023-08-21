#include "lists.h"

void BirminghamFirst(void) __attribute__ ((constructor));

/**
 * BirminghamFirst - prints a sentence before the main
 * function is executed
 */
void BirminghamFirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

