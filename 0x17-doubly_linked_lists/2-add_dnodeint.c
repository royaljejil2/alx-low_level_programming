#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *jey;
	dlistint_t *h;

	jey = malloc(sizeof(dlistint_t));
	if (jey == NULL)
		return (NULL);

	jey->n = n;
	jey->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	jey->next = h;

	if (h != NULL)
		h->prev = jey;

	*head = jey;

	return (jey);
}
