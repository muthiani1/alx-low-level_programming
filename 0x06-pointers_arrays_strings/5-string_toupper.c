#include "main.h"

/**
 * string_toupper - changes all lowercase letter os a string to uppercase
 *
 * @s: string
 * Return: pointer to uppercase characters
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
