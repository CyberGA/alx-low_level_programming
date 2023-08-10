#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: starting number
 * @max: end number exclusive
 * Return: array
 */
int *array_range(int min, int max)
{
	int i, len;
	int *res;

	if (min > max)
		return (NULL);

	len = max - min;

	res = malloc(sizeof(int) * len);

	if (res == NULL)
		return (NULL);

	for (i = min; i < max; i++)
		res[i] = i;

	return (res);
}
