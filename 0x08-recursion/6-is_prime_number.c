#include "main.h"

/**
 * helper - function
 *
 * @num: number
 * @i: number
 * Return: integer
 */

int helper(int num, int i)
{
	if (num % i == 0)
		return (0);
	if (i * i < num)
		return (helper(num, i + 1));
	return (1);
}

/**
 * is_prime_number - determines if number is a prime number
 *
 * @n: number to check
 * Return: 1 (a prime number) 0 (otherwise)
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (helper(n, 2));
}
