#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int res = 0, power = 1;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = i - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			res += power;
		power += power;
	}
	return (res);
}
