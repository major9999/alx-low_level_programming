#include <stdio.h>
#include "main.h"

/**
 * main - print numbers from 0 - 100 on screen.
 * 3 = Fizz , 5 = Buzz , 3&5 = FizzBuzz.
 * Return: return 0 and exit the program.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
