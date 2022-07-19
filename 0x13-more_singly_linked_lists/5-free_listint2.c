#include "lists.h"

/**
 * free_listint - frees a listint_t and sets head
 * to NULL
 * @head: a pointer to the head of the list_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
