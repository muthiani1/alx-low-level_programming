#include "main.h"

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elements
 * @size: size of elements
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < (nmemb * size))
		ptr[i++] = 0;
	return (ptr);
}
