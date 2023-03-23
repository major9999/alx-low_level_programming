#include"main.h"

/**
 * print_square - print a square with a specific size on screen.
 * @size: size of the square to print.
 * Return: nothing.
*/

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
