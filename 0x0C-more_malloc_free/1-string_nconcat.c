#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string pointer.
 * @s2: secound string pointer.
 * @n: the where to start pos.
 * Return: the new string or null if failed.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, cndex;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (cndex = 0; s1[cndex]; cndex++)
	{
		len++;
	}
	concat = malloc(sizeof(char) * len + 1);

	if (concat == NULL)
	{
		return (NULL);
	}

	len = 0;
	for (cndex = 0; s1[cndex]; cndex++)
	{
		concat[len++] = s1[cndex];
	}
	for (cndex = 0; s2[cndex] && cndex < n; cndex++)
	{
		concat[len++] = s2[cndex];
	}
	concat[len] = '\0';

	return (concat);
}
