#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program entry point.
 * @argc: the number of args.
 * @argv: the array of args.
 *
 * Return: just a 0.
 */

int main(int argc, char *argv[])
{
	if (argc == 3)

	{
		int fnum = atoi(argv[1]);
		int snum = atoi(argv[2]);

		printf("%d\n", fnum * snum);
	}

	else

	{
		printf("Error\n");
	}

	return (0);
}
