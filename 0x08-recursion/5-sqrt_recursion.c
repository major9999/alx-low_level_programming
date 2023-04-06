#include "main.h"

int find_square_root(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The resulting square root, or -1 if the input is negative.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_square_root(n, 0));
}

/**
 * find_square_root - Recursively finds the natural square root of a number.
 * @n: The number to calculate the square root of.
 * @i: The iterator.
 *
 * Return: The resulting square root.
 */

int find_square_root(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (find_square_root(n, i + 1));
}
