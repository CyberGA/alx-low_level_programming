#include "main.h"

/**
 * rot13 - capitalizes all words of a string.
 * @y: string.
 * Return: string.
 */
char *rot13(char *y)
{
	int n, i = 0;
	char s[] = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";
	char t[] = "MLKJIHGFEDCBAmlkjihgfedcbaZYXWVUTSRQPONzyxwvutsrqpon";
	int len = 51;

	while (y[i] != '\0')
	{
		for (n = 0; s[n] != '\0'; n++)
		{
			if (s[n] == y[i])
			{
				y[i] = t[len - n];
				break;
			}
		}
		i++;
	}
	return (y);
}
