#include <stdio.h>
#include <stdlib.h>

/**
 * main - print min number of coins.
 * @argc: the number of args.
 * @argv: the array of args.
 *
 * Return: just a 0.
 */

int main(int argc, char *argv[])
{
	int cents, num_coins = 0, i = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents > 0)
	{
		num_coins += cents / coins[i];
		cents %= coins[i];
		i++;
	}

	printf("%d\n", num_coins);

	return (0);
}
