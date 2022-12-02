#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list
 *
 * Return: No return
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *pile;

	if (head != NULL)
	{
		pile = *head;
		while ((temp = pile) != NULL)
		{
			pile = pile->next;
			free(temp);
		}
		*head = NULL;
	}
}
