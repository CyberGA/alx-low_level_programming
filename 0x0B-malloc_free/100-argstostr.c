#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, size = 0;
	char *res;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
		size++;
	}

	size++;
	res = malloc(size * sizeof(char));

	if (res == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			res[k] = av[i][j];
			k++;
		}
		res[k] = '\n';
		k++;
	}
	res[k] = '\0';

	return (res);
}
