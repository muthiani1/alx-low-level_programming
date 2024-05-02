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
	int i, j, k;

	i = 0;
	while (haystack[i] != '\0')
	{
		if (needle[j] == haystack[i])
		{
			k = i;
			while (needle[j] == haystack[k])
			{
				j++;
				k++;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
