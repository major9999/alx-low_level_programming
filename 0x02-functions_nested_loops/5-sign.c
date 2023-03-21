#include "main.h"

/**
 * print_sign - checks if the character is alphabet or not.
 * @n: the number for the test.
 * Return: 1 if > 0 , 0 if 0 , -1 < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
