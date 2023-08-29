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
	listint_t *cur, *new, *next;
	unsigned int i = 0;

	if (!*head || !head)
		return (NULL);

	cur = *head;
	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	while (cur)
	{
		if (i == idx)
		{
			next = cur->next;
			cur->next = new;
			new->next = next;
			return (new);
		}
		cur = cur->next;
		i++;
	}
}
