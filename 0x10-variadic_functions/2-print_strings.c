#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: the sep string to be used in string list.
 * @n: The number of paramters to work on it.
 * Return: Just Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *myastr;
	unsigned int count;

	va_list apx;

	va_start(apx, n);

	if (separator == NULL)

	{
		separator = "";
	}

	for (count = 0; count < n; count++)

	{
		myastr = va_arg(apx, char*);
		if (myastr == NULL)

		{
			myastr = "(nil)";
		}

		printf("%s", myastr);
		if (count < n - 1)

		{
			printf("%s", separator);
		}

	}

	printf("\n");
	va_end(apx);
}
