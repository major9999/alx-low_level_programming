#include "main.h"
#include <stdlib.h>

/**
 * _printmystring - a function that does some work for me let.
 * @mydstr: the first string args.
 * @len: the size as an int.
 * Return: nothing just void.
 */

void _printmystring(char *mydstr, int len)
{
	int i;
	int j;

	i = j = 0;

	while (i < len)

	{
		if (mydstr[i] != '0')

		{
			j = 1;
		}

		if (j || i == len - 1)

		{
			_putchar(mydstr[i]);
		}

		i++;
	}

	_putchar('\n');
	free(mydstr);
}

/**
 * multiplex - a function that does some work for me to te.
 * @nx: the cahracter to work on it.
 * @mydnum: the string to do the work.
 * @numindx: the last of lord of the rings.
 * @mydest: the destination to work on it.
 * @dindx: high index for addition.
 * Return: some pointer or null if failed.
 */

char *multiplex(char nx, char *mydnum, int numindx, char *mydest, int dindx)
{
	int j, k, mul, mulrem, add, addrem;

	mulrem = addrem = 0;

	for (j = numindx, k = dindx; j >= 0; j--, k--)
	{
		mul = (nx - '0') * (mydnum[j] - '0') + mulrem;
		mulrem = mul / 10;
		add = (mydest[k] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		mydest[k] = add % 10 + '0';
	}

	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
		add = (mydest[k] - '0') + addrem;
		addrem = add / 10;
		mydest[k] = add % 10 + '0';
	}

	if (addrem)
	{
		return (NULL);
	}

	return (mydest);
}

/**
 * check_for_digits - check if the digits on args are real.
 * @av: pointer to arguments
 * Return: 0 if digits, 1 if not
 */

int check_for_digits(char **av)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - initializes a string
 * @str: sting to initialize
 * @l: length of strinf
 *
 * Return: void
 */
void init(char *str, int l)
{
	int i;

	for (i = 0; i < l; i++)
		str[i] = '0';
	str[i] = '\0';
}

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: zero, or exit status of 98 if failure
 */

int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;
	char *a;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	init(a, ln - 1);
	for (ti = l2 - 1, i = 0; ti >= 0; ti--, i++)
	{
		t = multiplex(argv[2][ti], argv[1], l1 - 1, a, (ln - 2) - i);
		if (t == NULL)
		{
			for (ti = 0; e[ti]; ti++)
				_putchar(e[ti]);
			free(a);
			exit(98);
		}
	}
	_printmystring(a, ln - 1);
	return (0);
}
