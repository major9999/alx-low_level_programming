#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog pointer.
 * @name: the name of the dog to point.
 * @age: the age of the dog to point.
 * @owner: the owner of the dog.
 * Return: a pointer to new dog struct.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nlos, olsx;
	unsigned int i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (nlos = 0; name[nlos]; nlos++)
		;
	nlos++;
	dog->name = malloc(nlos * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nlos; i++)
	{
		dog->name[i] = name[i];
	}
	dog->age = age;
	for (olsx = 0; owner[olsx]; olsx++)
		;
	olsx++;
	dog->owner = malloc(olsx * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < olsx; i++)
	{
		dog->owner[i] = owner[i];
	}
	return (dog);
}
