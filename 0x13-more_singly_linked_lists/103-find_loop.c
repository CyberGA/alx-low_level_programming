#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of the list
 * Return: node
 */
listint_t *find_listint_loop(listint_t *head)
{
	const listint_t *temp = head, *prev;
	size_t count = 0, i;

	while (temp)
	{
		temp = temp->next;
		count++;
		prev = head;
		i = 0;

		while (i < count)
		{
			if (temp == prev)
			{
				return (temp);
			}
			i++;
			prev = prev->next;
		}
	}
	return (NULL);
}
