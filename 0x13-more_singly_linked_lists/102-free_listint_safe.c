#include "lists.h"

/**
 * free_listint_safe -  frees a listint_t list
 * @h: head of the list
 * Return: unsigned integer
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = *h, *prev;
	size_t count = 0, i;

	while (temp)
	{
		temp = temp->next;
		count++;
		prev = *h;
		i = 0;

		while (i < count)
		{
			if (temp == prev)
			{
				free(*h);
				*h = NULL;
				return (count);
			}
			i++;
			prev = prev->next;
		}
	}
	*h = NULL;
	return (count);
}
