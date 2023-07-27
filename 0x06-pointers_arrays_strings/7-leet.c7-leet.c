#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @y: string to manipulate
 * Return: string
 */
char *leet(char *y)
{
	int b = 0;
	char r[] = "AaEeOoTtLl";
	char v[] = "4433007711";
	int c;

	while (y[b] != '\0')
	{
		for (c = 0; r[c] != '\0'; c++)
		{
			if (y[b] == r[c])
				y[b] = v[c];
		}
		b++;
	}
	return (y);
}
