#include "main.h"

/**
 * print_diagsums - Printd the sum of the two diagonals of a square matrix
 * of integers
 *
 * @a : square matrix
 * @size: size of matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	i = sum1 = sum2 = 0;
	while (i < size * size)
	{
		sum1 += a[i];
		i = i + (size + 1);
	}
	i = (size * size) -  size;
	while (i > 0)
	{
		sum2 += a[i];
		i = i - (size - 1);
	}
	printf("%d, %d\n", sum1, sum2);
}
