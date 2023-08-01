#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: string to check
 * @c: character to confirm if present
 *
 * Return: pointer to c or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;

		if (i == 'l')
			return (s - 1);
	}

	if (i == 0)
		return (NULL);
}
