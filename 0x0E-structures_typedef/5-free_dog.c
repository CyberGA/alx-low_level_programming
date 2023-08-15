#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog memory location
 * @d: dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
		free(d->name);
		free(d->owner);
	}
}
