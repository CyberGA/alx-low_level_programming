#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to check
 * made by Gbenga Etomu
 *
 * Return: int
 */
int print_last_digit(int n)
{
	int a;
	a = n % 10;

	_putchar(a + '0');
	return (a);
}
