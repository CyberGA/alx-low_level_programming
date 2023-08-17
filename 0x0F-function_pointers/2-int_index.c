#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the elements
 * @size: lenght of the array
 * @cmp: callback function
 *
 * Return: integer value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (array[i]);
			}
		}
	}
	return (-1);
}

