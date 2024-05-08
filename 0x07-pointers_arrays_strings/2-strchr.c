#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurence of the character
 * or NULL if the character is not found
 *
 * @s: string to search
 * @c: character to find
 * Return: pointer to first occurence
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}

	}
	return (NULL);
}

