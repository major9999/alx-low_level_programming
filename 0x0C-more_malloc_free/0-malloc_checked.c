#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: the mem to allocate it.
 * Return: pointer to the allocated memory or EXIT.
 */

void *malloc_checked(unsigned int b)
{
	void *xaq;

	xaq = malloc(b);

	if (xaq == NULL)
		exit(98);

	return (xaq);

}
