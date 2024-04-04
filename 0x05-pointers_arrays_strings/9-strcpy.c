#include "main.h"

/**
 * _strcpy - Copies string to another memory location
 *
 * @dest: destination me location
 * @src: source memory location
 * Return: pointer to new string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while ((dest[i] = src[i]) != '\0')
		i++;

	return (dest);
}
