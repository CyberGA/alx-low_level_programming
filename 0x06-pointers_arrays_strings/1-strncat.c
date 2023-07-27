#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of src char to concatenate
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, src_len;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	{
	}

	for (src_len = 0; src_len < n; src_len++)
	{
		dest[dest_len + src_len] = src[src_len];
	}
	return (dest);
}
