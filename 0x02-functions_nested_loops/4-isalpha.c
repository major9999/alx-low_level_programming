#include "main.h"

/**
 * _isalpha - checks if the character is alphabet or not.
 * @c: the character for the test.
 * Return: 1 if alphabet and 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))

	{
		return (1);
	}

	else

	{
		return (0);
	}
}
