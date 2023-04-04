#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @n: the copies function.
 * @src: memory area to work on.
 * @dest: the memory are to work at.
 * Return: the dest pointer.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)

	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
