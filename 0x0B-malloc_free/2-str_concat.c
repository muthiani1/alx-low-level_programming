#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, i2, j, size;

	i = j = 0;

	if (s1 == NULL)
		i = 0;
	else
		while (s1[i] != '\0')
			i++;

	if (s2 == NULL)
		j = 0;
	else
		while (s2[j] != '\0')
			j++;

	size = i + j + 1;
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i2 = 0; i2 < i; i2++)
	{
		ptr[i2] = s1[i2];
	}

	for (i2 = 0;  i2 < j; i2++)
	{
		ptr[i++] = s2[i2];
	}
	ptr[i] = '\0';

	return (ptr);
}
