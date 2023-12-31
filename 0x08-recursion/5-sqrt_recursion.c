#include "main.h"

int sqrt_recursion(int, int);
/**
 * _sqrt_recursion - cal. naturel squre root
 * @n: number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursion(n, 0));
}

/**
 * sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_recursion(n, i + 1));
}
