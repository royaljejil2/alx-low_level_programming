#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *jey;
	listint_t *boss = *head;

	jey = malloc(sizeof(listint_t));
	if (!jey)
		return (NULL);

	jey->n = n;
	jey->next = NULL;

	if (*head == NULL)
	{
		*head = jey;
		return (jey);
	}

	while (boss->next)
		boss = boss->next;

	boss->next = jey;

	return (jey);
}

