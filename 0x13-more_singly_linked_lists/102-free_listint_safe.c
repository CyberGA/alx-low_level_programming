#include "lists.h"

/**
 * free_listint_safe -  frees a listint_t list
 * @h: head of the list
 * Return: unsigned integer
 */
size_t free_listint_safe(listint_t **h)
{
	const listint_t *temp = *h, *prev;
	size_t count = 0, i;

	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		count++;
		prev = *head;
		i = 0;

		while (i < count)
		{
			if (temp == prev)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (count);
			}
			i++;
			prev = prev->next;
		}

		if (head == NULL)
			exit(98);
	}
	return (count);
}
