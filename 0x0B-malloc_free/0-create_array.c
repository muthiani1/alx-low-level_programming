#include "main.h"

/**
 * create_array - Creates an array of characters and initializes it with
 * a specific char.
 *
 * @size: size of the array
 * @c: character to initialize
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
