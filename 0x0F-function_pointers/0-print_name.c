#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a function that prints a name.
 * @name: the name to be printed.
 * @f: pointer to name function to use.
 * Rteurn: Just Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

	{
		f(name);
	}

}
