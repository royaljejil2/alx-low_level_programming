#include "lists.h"

/**
 * add_nodeint - It adds a new node at the beginning of a linked list
 * @head: The pointer to the first node in the list
 * @n: The data to insert in that new node
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *toy;

	toy = malloc(sizeof(listint_t));
	if (!toy)
		return (NULL);

	toy->n = n;
	toy->next = *head;
	*head = toy;

	return (toy);
}

