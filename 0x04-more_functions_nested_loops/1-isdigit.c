#include "main.h"

/**
* _isdigit - checks if a character is digit or not.
* @c: character to test.
* Return: 1 if digit else returns 0.
**/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
