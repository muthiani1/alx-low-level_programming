#include "main.h"

/**
 * print_array - prints n elements from array
 *
 * @a: array
 * @n: number of elements
 * Return void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
		i++;
	}
}
