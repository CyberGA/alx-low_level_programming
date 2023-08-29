#include "lists.h"

/**
 * sum_listint - sum of all the data
 * @head: head of linked list
 * Return: sum of all n data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	if (head == NULL)
		return (sum);

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
