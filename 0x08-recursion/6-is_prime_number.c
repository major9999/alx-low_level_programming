#include "main.h"

int check_prime(int nx, int in);

/**
 * is_prime_number - determines if a number is prime
 * @n: number to evaluate
 *
 * Return: 1 if n is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_prime(n, n - 1));
}

/**
 * check_prime - recursively determines if a number is prime
 * @nx: number to evaluate
 * @in: iterator
 *
 * Return: 1 if nx is prime, 0 if not
 */

int check_prime(int nx, int in)
{
	if (in == 1)
		return (1);

	if (nx % in == 0 && in > 0)
		return (0);

	return (check_prime(nx, in - 1));
}
