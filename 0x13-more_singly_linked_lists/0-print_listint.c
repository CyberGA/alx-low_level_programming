#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		len++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (len);
}
