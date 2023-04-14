#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array.
 * @nmemb: the memory to alloc.
 * @size: the siz of elements to obtain.
 * Return: the start of the allocated mem to the pon.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *awb;
	unsigned int b;

	if (nmemb == 0 || size == 0)

	{
		return (NULL);
	}

	awb = malloc(nmemb * size);

	if (awb == NULL)
	{
		return (NULL);
	}

	for (b = 0; b < (nmemb * size); b++)

	{
		awb[b] = 0;
	}

	return (awb);
}
