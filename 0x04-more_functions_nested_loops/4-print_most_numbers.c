#include "main.h"

/**
*print_most_numbers - print numbers from 0 - 9 expect 2,4.
*Return: nothing.
*/

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
			continue;
		_putchar(c);
	}
	_putchar('\n');
}
