#include "main.h"

/**
 * print_line - print n lines on the screen.
 * @n: number of lines to print.
 * Return: nothing.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
