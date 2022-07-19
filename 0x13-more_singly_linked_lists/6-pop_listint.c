#include "lists.h"

/**
 * pop_listint - deletes head node of a listint_t
 * @head: pointer to the address of the head of the listint_t
 *
 * Return: 0 if listint_t is empty, otherwise head node's data n
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int node;

	if (*head == NULL)
		return (0);

	tmp = *head;
	node = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (node);
}
