#include "main.h"

/**
 * _strdup - Returns pointer to a copy of the string
 *
 * @str: string
 * Return: pointer to duplicate string
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	i = j = 0;
	while (str[i] != '\0')
		i++;

	ptr = (char *)malloc((i * sizeof(char)) + 1);

	while ((ptr[j] = str[j]) != '\0')
		j++;

	return (ptr);
}
