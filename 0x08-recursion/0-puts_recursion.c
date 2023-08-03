#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(s);
		s++;
	}
	_putchar(s);
}
