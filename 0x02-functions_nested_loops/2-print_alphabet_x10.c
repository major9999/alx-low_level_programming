#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet on console 10 times with a new line
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)

	{
		int j = 0;

		for (j = 97; j <= 122; j++)

		{
			_putchar(j);
		}

		_putchar('\n');
	}

}
