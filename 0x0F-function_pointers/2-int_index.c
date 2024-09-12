#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to comparison function
 * Return: index of first matching element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, check;

	if (size < 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		check = cmp(array[i]);
		if (check == 1)
			return (i);
	}

	return (-1);
}
