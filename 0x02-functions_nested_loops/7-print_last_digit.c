#include "main.h"

/**
 * print_last_digit - print the last digit of a number.
 * @n: the number to get it's last digit.
 * Return: return the last digit of a number.
 */
int print_last_digit(int n)
{
	long int l = n;

	if (l < 0)
		l = -l;

	l = l % 10;

	_putchar(l + '0');

	return (l);
}
