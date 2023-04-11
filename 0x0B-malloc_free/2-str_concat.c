#include "main.h"
#include <stdlib.h>

/**
 * str_concat - merge two strings together.
 * @s1: the first string.
 * @s2: the second string.
 * Return: the pointer merged string or NULL if  failed.
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1, len2, maxlen;
	char *mystr;

	len1 = 0;
	len2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}

	maxlen = len1 + len2;

	mystr = malloc(sizeof(char) * maxlen + 1);

	if (mystr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		mystr[i] = s1[i];

	for (i = 0; i < len2; i++)
		mystr[len1 + i] = s2[i];

	mystr[maxlen] = '\0';

	return (mystr);
}
