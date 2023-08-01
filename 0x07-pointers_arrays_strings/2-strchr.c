#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to check
 * @c: character to confirm if present
 *
 * Return: pointer to c or NULL
 */
char *_strchr(char *s, char c)
{
	char *f = NULL;
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'l')
		{
			f = s[i];
			break;
		}
	}

	return (f);
}
