#include "lists.h"

/**
 * listint_len - This returns the number of elements in a linked lists
 * @h: The linked list of type listint_t to traverse.
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int jey = 0;

	while (h)
	{
		jey++;
		h = h->next;
	}

	return (jey);
}

