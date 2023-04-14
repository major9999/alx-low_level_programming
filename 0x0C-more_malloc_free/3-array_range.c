#include "main.h"
#include <stdlib.h>

/**
 * *array_range - a function that creates an array of integers.
 * @min: the min value range to start at.
 * @max: the max value to end with in the range.
 * Return: a ptr to the new allocated array in mem or NULL if failed.
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, mxsize;

	if (min > max)

	{
		return (NULL);
	}

	mxsize = max - min + 1;

	ptr = malloc(sizeof(int) * mxsize);

	if (ptr == NULL)

	{
		return (NULL);
	}


	for (i = 0; min <= max; i++)

	{
		ptr[i] = min++;
	}


	return (ptr);
}
