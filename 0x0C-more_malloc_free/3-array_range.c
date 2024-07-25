#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: smallest number in array
 * @max: largest number in array
 * Return: pointer to integer array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(sizeof(int) * (max - min + 1));
		if (ptr == NULL)
			return (NULL);
	}

	while (min <= max)
		ptr[i++] = min++;

	return (ptr);
}
