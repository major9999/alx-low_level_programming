#include "main.h"

/**
 * string_toupper - convert lowercase to uppercase
 * @s: pointer to character
 * Return: the result of uppercase letter
 */

char *string_toupper(char *s)
{

	int i;

i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
