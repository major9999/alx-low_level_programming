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
	if (argc > 1)

	{
		int i, j, totalsum = 0;

		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}

			totalsum = totalsum + atoi(argv[i]);
		}

		printf("%d\n", totalsum);
	}

	else

	{
		printf("0\n");
	}

	return (0);
}
