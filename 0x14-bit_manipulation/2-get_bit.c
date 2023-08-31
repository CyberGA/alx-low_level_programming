#include "main.h"

/**
 * get_bit - get value of a bit at a given index
 * @n: decimal
 * @index: index of specific bit
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
