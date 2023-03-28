#include "main.h"

/**
* swap_int - swap two numbers together.
* @a: first number.
* @b: second number.
* Return: nothing.
*/

void swap_int(int *a, int *b)
{
		int a1;

		a1 = *a;
		*a = *b;
		*b = a1;
}
