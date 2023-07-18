#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to compare
 * made by Gbenga Etomu
 *
 * Return: + or 0 or -
 */
int print_sign(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n > 0)
		_putchar('+');
	else
		_putchar('-');
}
