#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string.
 * @str: the main string.
 * Return: returns the dup string or NULL.
 */

char *_strdup(char *str)
{
	char *mystr;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')

	{
		len++;
	}


	mystr = malloc(sizeof(char) * len + 1);

	if (mystr == NULL)

	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)

	{
		mystr[i] = str[i];
	}

	return (mystr);
}
