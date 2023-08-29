#include "lists.h"

/**
 * add_nodeint - add new node to the beginning of list
 * @head: address of the first node
 * @n: new node data
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	temp = *head;
	new->next = temp;
	(*head) = new;

	return (new);
}
