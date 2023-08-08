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
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	len = len + 1;
	result = malloc(len * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		result[i] = str[i];
	return (result);
}
