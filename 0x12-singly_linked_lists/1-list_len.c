#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * list_len - just a function for sake of project.
 * @h: argument 1 i think.
 * Return: a size_T variable return type for subset.
 */

size_t list_len(const list_t *h)
{
	int mycow;

	mycow = 0;

	while (h)

	{
		mycow++;
		h = h->next;
	}

	return (mycow);
}
