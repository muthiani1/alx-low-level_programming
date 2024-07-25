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
	int *ptr;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(sizeof(size) * nmemb);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < nmemb)
		ptr[i++] = 0;
	return (ptr);
}
