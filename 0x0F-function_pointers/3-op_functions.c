#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - calculates the sum of two integers.
 * @a: the first num to work with.
 * @b: the second num to work with.
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of two integers.
 * @a: the first num to work with.
 * @b: the second num to work with.
 * Return: subtractopn results of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of two integers.
 * @a: the first num to work with.
 * @b: the second num to work with.
 * Return: Multiplication Results of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of two integers.
 * @a: the first num to work with.
 * @b: the second num to work with.
 * Return: The division results of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of two integers.
 * @a: the first num to work with.
 * @b: the second num to work with.
 * Return: The remainder of a divided by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
