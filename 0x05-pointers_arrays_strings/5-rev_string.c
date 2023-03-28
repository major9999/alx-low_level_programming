#include "main.h"

/**
 * rev_string - reverse a string.
 * @s: string to reverse it.
 */

void rev_string(char *s)
{
	char tchar;
	int i, len = 0, b = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	b = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tchar = s[i];
		s[i] = s[b];
		s[b--] = tchar;
	}
}
