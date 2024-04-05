#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 *
 * @a: array
 * @n: number of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;
	int j = n - 1;

	while (j > 0 && i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
