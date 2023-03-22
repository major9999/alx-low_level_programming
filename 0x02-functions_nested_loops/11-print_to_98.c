#include "main.h"

/**
 * print_to_98 - print numbers to 98.
 * @n: the number to start from.
 * Return: nothing.
 */
void print_to_98(int n)
{
	int startc;

	if (n > 98)
		for (startc = n; startc > 98; startc--)
			printf("%d, ", startc);
	else
		for (startc = n; startc < 98; startc++)
			printf("%d, ", startc);
	printf("98\n");
}
