#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * to by @s with the constant byte @b
 * @n: bytes pointed to.
 * @s: the byte constant b.
 * @b: the memory pointer.
 * Return: the s thing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)

	{
		s[i] = b;
		i++;
	}

	return (s);
}
