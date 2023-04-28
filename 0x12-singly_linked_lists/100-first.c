#include <stdio.h>

void myfprintbefore(void) __attribute__ ((constructor));

/**
 * myfprintbefore - a functiohn for the sake of the project.
 *
 * Return: just nothing.
 */

void myfprintbefore(void)

{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
