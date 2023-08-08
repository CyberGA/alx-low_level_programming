#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  newly allocated space in memory
 * contains a copy of the string given as a parameter
 * @str: string to copy
 * Return: pointer to the address
 */
char *_strdup(char *str)
{
	char *result;

	if (str == NULL)
		return (NULL);

	result = calloc(1, sizeof(str));
	return (result);
}
