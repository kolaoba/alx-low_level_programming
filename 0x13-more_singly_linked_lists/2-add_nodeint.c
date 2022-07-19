#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * of a listint_t list
 * @head: a pointer to the head of the list_t list
 * @n: integer contained in new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
