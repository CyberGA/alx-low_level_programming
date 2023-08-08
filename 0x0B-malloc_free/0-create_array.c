#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: length of the array
 * @c: char to initialize with
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *result
	if (size == 0)
		return (NULL);

	result = malloc(size * sizeof(c));

	if (result == NULL)
		return (NULL);

	result[0] = c;
	return (result);
}
