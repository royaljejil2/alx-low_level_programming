#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the first node
 * Return: number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	size_t s;

	if (h == NULL)
	{
		return (0);
	}
	for (s = 1; h->next != NULL; s++)
		h = h->next;
	return (s);
}
