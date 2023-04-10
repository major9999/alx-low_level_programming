#include "main.h"

/**
 * _strlen - print the length of a string.
 * @s: the string to get it's length.
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}

	return (counter);
}
