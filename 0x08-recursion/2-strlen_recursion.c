#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string recursively
 * @s: string to be evaluated
 *
 * Return: length of the string as an integer
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)

	{
		length++;
		length += _strlen_recursion(s + 1);

	}

	return (length);
}
