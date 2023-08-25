#include "lists.h"

/**
 * print_list - prints all elements
 * @h: head
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t len = 0;

	ptr = h;

	if (ptr != NULL)
	{
		while (ptr->next != NULL)
		{
			if (ptr->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%lu] %s\n", len, ptr->str);
			ptr = ptr->next;
			len++;
		}
	}
	return (len);
}
