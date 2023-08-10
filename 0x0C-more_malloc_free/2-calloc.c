#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: numb of elemet
 * @size: size of array
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, len;
	char *res;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * size;

	res = malloc(len);

	if (res == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		res[i] = 0;

	return (res);
}
