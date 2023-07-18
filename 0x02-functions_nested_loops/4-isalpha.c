#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 * made by Gbenga Etomu
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= "A" && c <= 'Z'));
}
