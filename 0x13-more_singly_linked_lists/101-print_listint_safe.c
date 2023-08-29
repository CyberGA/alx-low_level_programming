#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head of the list
 * Return: unsigned integer
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head;
	size_t count = 0;

	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
