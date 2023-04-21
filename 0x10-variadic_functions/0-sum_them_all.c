#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that sum of all its parameters.
 * @n: the number of numbers to sum.
 * Return: return the sum of the numbers.
 */

int sum_them_all(const unsigned int n, ...)
{
	int myfinalsum;
	unsigned int i;

	va_list apx;

	va_start(apx, n);

	if (n == 0)
	{
		return (0);
	}


	for (i = 0; i < n; i++)
	{
		myfinalsum += va_arg(apx, int);
	}

	va_end(apx);

	return (myfinalsum);
}
