#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of linked list
 * @h: head of a list
 * @n: number element
 *
 * Return: address of the new element, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
