#include "main.h"

/**
 * _isdigit - check for digits 0 through 9
 * @c: digit to check
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	return ((c >= 0 && c <= 9) ? 1 : 0);
}
