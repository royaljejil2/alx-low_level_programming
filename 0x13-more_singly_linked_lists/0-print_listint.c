#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		printf("%ld\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}

