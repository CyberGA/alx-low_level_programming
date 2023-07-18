#include "main.h"

/**
 * print_to_98 - prints from any numbeer to 98
 * @n: start number
 *
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			_putchar(n + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	else
		while (n <= 98)
		{
			_putchar(n + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	_putchar('\n');
}
