#include "main.h"
#include <math.h>

/**
 * _helper - function
 * @num: number
 * @i: series
 *
 * Return: integer
 */

int _helper(int num, int i)
{
	if (i * i > num)
		return (-1);
	if (i * i == num)
		return (i);
	return (_helper(num, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number
 * Return: square root of number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_helper(n, 0));
}
