#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: string to be printed in reverse
 */
void rev_string(char *s)
{
	int len, i, j;
	char v1, v2;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	j = len - 1;
	i = 0;

	while (j > i)
	{
		v1 = s[i];
		v2 = s[j];
		s[i] = v2;
		s[j] = v1;
		j--;
		i++;
	}
}
