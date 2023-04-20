#include <stdlib.h>
#include <stdio.h>

/**
 * print_mycodes - print the opcodes for running prog.
 * @amain: main func address to work with.
 * @numx: the bye length.
 * Return: Just Nothing.
 */

void print_mycodes(char *amain, int numx)
{
	int i;

	for (i = 0; i < numx; i++)

	{
		printf("%.2hhx", amain[i]);
		if (i < numx - 1)

		{
			printf(" ");
		}

	}

	printf("\n");

}

/**
 * main - print the op codes of the program.
 * @argc: the argc number.
 * @argv: the pointer args to work with.
 * Return: The success message.
 */

int main(int argc, char **argv)
{
	int mynums;

	if (argc != 2)

	{
		printf("Error\n");
		exit(1);
	}

	mynums = atoi(argv[1]);

	if (mynums < 0)

	{
		printf("Error\n");
		exit(2);
	}

	print_mycodes((char *)&main, mynums);
	return (0);
}
