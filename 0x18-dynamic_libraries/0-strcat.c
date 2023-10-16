#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, src_len;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	{
	}

	for (src_len = 0; src[src_len] != '\0'; src_len++)
	{
		dest[dest_len + src_len] = src[src_len];
	}
	return (dest);
}
