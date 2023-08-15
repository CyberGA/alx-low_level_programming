#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new dog instance
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
