#include "3-calc.h"

/**
 * op_add - adds two integers
 *
 * @a: number 1
 * @b: number 2
 * Return: sum of the two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 *
 * @a: number 1
 * @b: number 2
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 *
 * @a: number 1
 * @b: number 2
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides integers
 *
 * @a: number 1
 * @b: number 2
 * Return: result of division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}

/**
 * op_mod - performs modulo on two numbers
 *
 * @a: number 1
 * @b: number 2
 * Return: remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a % b);
}
