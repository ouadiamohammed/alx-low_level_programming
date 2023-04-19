#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - sum of two integers.
 * @a: first number.
 * @b: second number.
 * Return: sum.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference between two integers.
 * @a: first number.
 * @b: second number.
 * Return: difference.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two integers.
 * @a: first number.
 * @b: second number.
 * Return: product.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers.
 * @a: first number.
 * @b: second number.
 * Return: the quotient of a and b.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a / b);
}

/**
 * op_mod - returns the reminder od a / b.
 * @a: first number.
 * @b: second number.
 * Return: the reminder of a / b.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return ( a % b);
}
