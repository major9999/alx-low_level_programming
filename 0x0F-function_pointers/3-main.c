#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a simple calculator program using pointers.
 * @argc: the num of args.
 * @argv: array of pointer args to use.
 * Return: The success message.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int mynum1, mynum2;
	char *op;

	if (argc != 4)

	{
		printf("Error\n");
		exit(98);
	}

	mynum1 = atoi(argv[1]);
	op = argv[2];
	mynum2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')

	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && mynum2 == 0) || (*op == '%' && mynum2 == 0))

	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(mynum1, mynum2));

	return (0);
}
