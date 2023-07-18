#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 * made by Gbenga Etomu
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
