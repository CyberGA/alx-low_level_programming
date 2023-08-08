#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat -  concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: new concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	int i, j, total, s1_len = 0, s2_len = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		s1_len++;
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		s2_len++;
	}

	total = s1_len + s2_len + 1;
	res = malloc(total * sizeof(char));

	if (res == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		if (s1 == NULL)
			break;
		res[i] = s1[i];
	}

	for (j = 0; j < s2_len; j++)
	{
		if (s2 == NULL)
			break;
		res[i] = s2[j];
		i++;
	}

	return (res);
}
