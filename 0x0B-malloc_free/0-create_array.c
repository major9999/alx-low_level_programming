#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars.
 * @size: The size of characters to add to the string.
 * @c: the character to use.
 * Return: the string pointer.
 */

char *create_array(unsigned int size, char c)
{
	char *mystr;
	unsigned int i;

	if (size == 0)

	{
		return (NULL);
	}

	mystr = malloc(sizeof(char) * size);

	if (mystr == NULL)

	{
		return (NULL);
	}

	for (i = 0; i < size; i++)

	{
		mystr[i] = c;
	}

	return (mystr);
}
