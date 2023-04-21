#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @n: number of paramters to work on.
 * @separator: the numbers seperator.
 * Return: Just Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int mycounter;
	va_list apx;

	va_start(apx, n);

	if (separator == NULL)

	{
		separator = "";
	}


	for (mycounter = 0; mycounter < n; mycounter++)

	{
		printf("%d", va_arg(apx, int));

		if (mycounter < n - 1)

		{
			printf("%s", separator);
		}

	}

	printf("\n");
	va_end(apx);
}
