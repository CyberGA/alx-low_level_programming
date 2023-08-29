#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at an index
 * @head: head of the list
 * @index: index of node to delete
 * Return: integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head, *cur = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (!temp && !temp->next)
	{
		if (i == index - 1)
		{
			cur = temp->next;
			temp->next = cur->next;
			free(cur);
			return (1);
		}
		i++;
		temp = temp->next;
	}
	return (-1);
}
