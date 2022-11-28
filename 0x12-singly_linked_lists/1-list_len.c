#include "lists.h"

/**
 * list_len - returns then number of elements in a list
 * @h: singly head linked list
 * Return: number of elemnts in the list
 */
size_t list_len(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		nodes += 1;
		h = h->next;
	}
	return (nodes);
}
