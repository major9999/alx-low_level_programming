#include "main.h"

/**
* print_rev - print a string in reversed order.
* @s: the pointer string to print.
* Return: nothing.
*/

void print_rev(char *s)
{
	int i, coun;

	coun = 0;
	while (s[coun] != '\0')
		coun++;

	for (i = coun - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
