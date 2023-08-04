#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including \0
 * @src: pointer to source address
 * @dest: destination address
 * Return: ponter to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int i, n;

	for (i = 0; src[i] != '\0'; i++)
	{
	}

	for (n = 0;  n <= i; n++)
		dest[n] = src[n];
	return (dest);
}
