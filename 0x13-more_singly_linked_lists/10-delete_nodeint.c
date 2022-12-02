#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node an index of linked list
 * @head: head of a list
 * @idx: index of the list where the node is deleted
 *
 * Return: 1 if it succeeded, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *curr;
	listint_t *next;

	curr = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && curr != NULL; i++)
		{
			curr = curr->next;
		}
	}

	if (curr == NULL || (curr->next == NULL && index != 0))
	{
		return (-1);
	}

	next = curr->next;

	if (index != 0)
	{
		curr->next = next->next;
		free(next);
	}
	else
	{
		free(curr);
		*head = next;
	}

	return (1);
}
