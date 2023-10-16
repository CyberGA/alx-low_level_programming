#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: complete string
 * @accept: string to check
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;
	unsigned int len = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
		i++;
	}

	return (len);
}
