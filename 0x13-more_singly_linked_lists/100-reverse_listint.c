#include "lists.h"

/**
 * reverse_listint - It reverses a linked list
 * @head: The pointer to the first node in the list
 *
 * Return: The pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *former = NULL;
	listint_t *new = NULL;

	while (*head)
	{
		new = (*head)->next;
		(*head)->next = former;
		former = *head;
		*head = new;
	}

	*head = former;

	return (*head);
}

