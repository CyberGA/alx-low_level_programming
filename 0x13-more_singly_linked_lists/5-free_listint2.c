#include "lists.h"

/**
 * free_listint2 - free a listint_t list
 * @head: head of linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		(*head) = temp;
	}
	*head = NULL;
}
