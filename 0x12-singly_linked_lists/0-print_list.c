#include "lists.h"

/**
 * print_list - print all element in a singly linked list
 * @h: head of the list
 * Return: total number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
