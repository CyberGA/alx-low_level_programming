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

	while (ptr)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		len++;
	}
	return (len);
}
