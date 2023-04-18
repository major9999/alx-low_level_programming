#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a dog struct in mem.
 * @d: pointer to the dog that u want to free.
 * Return: Just Nothing.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)

	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
