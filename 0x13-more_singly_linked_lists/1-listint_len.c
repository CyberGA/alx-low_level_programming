#include "lists.h"

/**
 * listint_len - get all the elements of a listint_t list
 * @h: linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}
