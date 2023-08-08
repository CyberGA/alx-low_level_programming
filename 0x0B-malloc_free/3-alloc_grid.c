#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: width size
 * @height: height size
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **res;

	res = (int **)malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		res[i] = calloc(width, sizeof(int));
	}

	return (res);
}
