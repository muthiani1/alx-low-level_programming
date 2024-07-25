#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to previously allocated memory
 * @old_size: size of previously allocated memory
 * @new_size: bytes of the new memory block
 * Return: pointer to reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1 = (char *)ptr;
	char *ptr2;
	unsigned int i;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);

	if (new_size > old_size)
		for (i = 0; i < old_size; i++)
			ptr2[i] = ptr1[i];
	if (new_size < old_size)
		for (i = 0; i < new_size; i++)
			ptr2[i] = ptr1[i];

	free(ptr1);
	return (ptr2);
}
