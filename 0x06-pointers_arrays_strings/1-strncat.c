#include "main.h"

/**
 * _strncat - appends src string (at most n bytes) to dest string
 *
 * @dest: destination string
 * @src: source string
 * @n: maximum bytes
 * Return: pointer to appended string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
		i++;
	while ((dest[i++] = src[j++]) != '\0' && j < n)
		;

	return (dest);
}
