#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string
 *
 * @s: srtring
 * Return: void
 */

void rev_string(char *s)
{
	int j = strlen(s) - 1;
	int i = 0;
	int temp;

	while (i < j)
	{
		if (i == j)
		{
			break;
		}
		else
		{
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;
		}
		i++;
		j--;
	}
}
