#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number
 * Return: square root of number
 */

int st, nd;

int helper(int num, int i)
{
	if (i * i > num)
		return (-1);
	if (i * i == num)
		return (i);
	return (helper(num,i + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (helper(n, 0));
}
