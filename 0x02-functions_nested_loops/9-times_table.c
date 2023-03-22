#include "main.h"

/**
 * times_table - prints a formatted times table.
 * Return: nothing.
 */
void times_table(void)
{
	int i, j, ij;

	for (i = 0; i < 10; i++)

	{
		for (j = 0; j < 10; j++)

		{

			ij = i * j;

			if (ij > 9)
				_putchar(ij / 10 + '0');

			_putchar(ij % 10 + '0');

			if (j < 9)
			{
				_putchar(',');
				if ((i * (j + 1)) < 10)
					_putchar(' ');

				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
