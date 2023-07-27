#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 */
void print_number(int n)
{
	unsigned int j = n;

	if (n < 0)
	{
		j = -n;
		_putchar('-');
	}

	if (j / 10)
		print_number(j / 10);

	_putchar((j % 10) + '0');
}
