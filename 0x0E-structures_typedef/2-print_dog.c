#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a dog's data
 * @d: dog data
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		d->name == (NULL) ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		(*d).owner == (NULL) ? printf("Owner: (nil)\n")
			: printf("Owner: %s\n", (*d).owner);
	}
}
