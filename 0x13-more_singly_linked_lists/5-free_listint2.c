#include "lists.h"

/**
 * free_listint - frees a listint_t and sets head
 * to NULL
 * @head: a pointer to the head of the list_t list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
}
