#include "main.h"

/**
 * set_bit - set value of a bit at a given index
 * @n: decimal
 * @index: index of specific bit
 * Return: integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val;

	if (index > 64)
		return (-1);

	for (val = 1; index > 0; index--, val *= 2)
	{
	}
	*n += val;

	return (1);
}
