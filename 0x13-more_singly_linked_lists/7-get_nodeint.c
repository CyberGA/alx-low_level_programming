#include "lists.h"

/**
 * get_nodeint_at_index -  nth node of a listint_t linked list
 * @head: address of the first node
 * @index: index of node
 * Return: node at an index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cur = 0;
	listint_t *ptr = head;

	if (head == NULL)
		return (NULL);

	while (ptr)
	{
		if (cur == index)
			return (ptr);
		cur++;
		ptr = ptr->next;
	}
	return (NULL);
}
