#include "main.h"

/**
 * _isdigit - check for digits 0 through 9
 * @c: digit holding the character
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
