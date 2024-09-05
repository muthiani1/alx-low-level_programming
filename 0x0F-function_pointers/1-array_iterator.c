#include "function_pointers.h"

/**
 * array_iterator - Executes function for each array element
 *
 * @array: provided array
 * @size: size of array
 * @action: pointer to executable function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
