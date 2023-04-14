#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block.
 * @ptr: a pointer to the mem space to reallocate.
 * @old_size: the old size for the space.
 * @new_size: the new size to change it.
 * Return: a pointer with the new allocated space to mem.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pxpp;
	unsigned int i, myno = new_size;
	char *myoldptr = ptr;

	if (ptr == NULL)

	{
		pxpp = malloc(new_size);
		return (pxpp);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}

	pxpp = malloc(new_size);

	if (pxpp == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		myno = old_size;
	}

	for (i = 0; i < myno; i++)

	{
		pxpp[i] = myoldptr[i];
	}

	free(ptr);

	return (pxpp);
}
