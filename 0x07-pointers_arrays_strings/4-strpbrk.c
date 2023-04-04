#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s:first the string occur.
 * @accept: the matches bytes.
 * Return: the byte pointer.
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)

	{
		for (index = 0; accept[index]; index++)

		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
