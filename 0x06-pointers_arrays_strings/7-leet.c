#include "main.h"

/**
 * leet - encodes a string into 1377
 *
 * @s: string
 * Return: pointer to encoded string
 */

char *leet(char *s)
{
	int i, j;
	int lett[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int leet[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == lett[j])
				s[i] = leet[j];
		}
	}

	return (s);
}
