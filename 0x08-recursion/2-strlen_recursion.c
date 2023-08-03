#include "main.h"

/**
 * _strlen_recursion - prints length of a string
 * @s: string
 * Return: the length (int)
 */
int _strlen_recursion(char *s)
{
	unsigned int len = 0;

	if (*s == '\0')
		return (0);
	len++;
	_strlen_recursion(s + 1);
}
