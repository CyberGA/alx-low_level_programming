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

	if (width <= 0 || height <= 0)
		return (NULL);

	res = (int **)malloc(height * sizeof(int *));

	if (res == NULL)
	{
		free(res);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		res[i] = (int *)calloc(width, sizeof(int));
		if (res[i] == NULL)
		{
			free(res);
			for (j = 0; j <= i; j++)
			{
				free(res[j]);
			}
			return (NULL);
		}
	}

	return (res);
}
