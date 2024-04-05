#include "main.h"

/**
 * _strcat - Appends src string to dest string
 *
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
		i++;
	while ((dest[i++] = src[j++]) != '\0')
		;
	return (dest);
}
