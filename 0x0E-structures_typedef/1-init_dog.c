#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes dog struct.
 *
 * @d: Pointer to struct of the dog.
 * @name: Pointer to dog's name.
 * @age: Age of your dog.
 * @owner: Pointer to owner's dog name.
 * Return: Just nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)

	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
