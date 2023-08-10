#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of char in second string to
 * be added
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k = 0, len = 0;
	char *res;

	for (i = 0; s1[i] != '\0'; i++)
		len++;

	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	if (n >= j)
	{
		k = j;
		len += j;
	}

	else
	{
		k = n;
		len += n;
	}

	len++;

	res = malloc(sizeof(*res) * len);

	if (res == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		res[i] = s1[i];

	for (j = 0; j < k; j++)
	{
		res[i] = s2[j];
		i++;
	}

	return (res);
}
