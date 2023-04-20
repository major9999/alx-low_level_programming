#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - a function that searches for an integer.
 * @array: the array of int to work on it.
 * @size: size of the input array to work on it.
 * @cmp: the compare function.
 * Return: the results of the executed func.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int ind;

	if (array == NULL || cmp == NULL)

	{
		return (-1);
	}

	for (ind = 0; ind < size; ind++)

	{
		if (cmp(array[ind]) != 0)

		{
			return (ind);
		}

	}

	return (-1);
}
