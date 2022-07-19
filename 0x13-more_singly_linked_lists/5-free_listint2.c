#include "lists.h"

/**
 * free_listint - frees a listint_t
 * @head: a pointer to the head of list_t list
 *
 * Description: sets the head to NULL
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
