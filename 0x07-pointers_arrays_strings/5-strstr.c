#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string to search in
 * @needle: substring to search
 * Return: pointer to the beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *i, *j, *k;

	if (!*needle)
		return (haystack);

	for (i = haystack; *i; i++)
	{
		j = i; /*iterate through haystack */
		k = needle; /* iterate through needle */

		while (*j && *k && *j == *k)
		{
			j++;
			k++;
		}

		if (!*k)
			return (i);
	}

	return (NULL);
}
