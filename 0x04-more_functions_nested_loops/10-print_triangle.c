#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: height of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = size; j > 0; j--)
		{
			if (j > i)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
