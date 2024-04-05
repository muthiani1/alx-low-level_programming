#include "main.h"

/**
 * _strcmp - Compares two string
 *
 * @s1: string
 * @s2: string
 * Return: Integer
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (i > j)
		return (15);
	else if (i < j)
		return (-15);
	else
		return (0);
}
