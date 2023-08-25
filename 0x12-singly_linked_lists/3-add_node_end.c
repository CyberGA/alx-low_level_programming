#include "lists.h"

/**
 * add_end - new node at the end
 * of a list_t list
 * @head: head
 * @str:  string
 * Return: linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	(*head)->next = new;

	return (new);
}
