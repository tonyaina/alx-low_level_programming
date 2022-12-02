#include "lists.h"

/**
 * pop_listint - deletes the head node of linked list
 * @head: head of a list
 *
 * Return: Head node's data
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *file;

	if (*head == NULL)
		return (0);

	file = *head;

	hnode = file->n;

	h = file->next;

	free(file);

	*head = h;

	return (hnode);
}
