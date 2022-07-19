#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of nodes in a listint_t list
 * @h: a point to the head of the list_t list
 *
 * Return: the number of nodes in the list_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
