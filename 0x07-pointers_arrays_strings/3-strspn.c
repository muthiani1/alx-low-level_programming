#include "main.h"

/**
 * _strspn - returns the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 *
 * @s:string to search
 * @accept: bytes to look for
 * Return: number of similar bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (k);
}
