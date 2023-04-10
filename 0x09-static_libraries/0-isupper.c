#include "main.h"

/**
 * _isupper - test if character is uppercase or not.
 * @c: the character to test.
 * Return: 0 for uppercase or 1 for lowercase.
 */
int _isupper(int c)

{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

}
