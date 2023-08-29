#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at an index
 * @head: address of the first node
 * @idx: index of node
 * @n: node data
 * Return: node at an index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cur, *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));

	if (!head || !new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (cur)
	{
		if (i == idx - 1)
		{
			new->next = cur->next;
			cur->next = new;
			return (new);
		}
		cur = cur->next;
		i++;
	}
	return (NULL);
}
