#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *res;

	res = malloc(b);

	if (res == NULL)
		exit(98);

	return (res);
}
