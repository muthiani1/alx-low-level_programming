#include "main.h"

/**
 * _atoi - converts string to integer
 *
 * @s: sring
 * Return: Converted integer
 */

int _atoi(char *s)
{
	int i, num, sign;

	i = num = sign = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '+')
			sign++;
		else if (s[i] == '-')
			sign--;
		else if (s[i] >= 48 && s[i] <= 57)
		{
			num = s[i++] - 48;
			while (s[i] >= 48 && s[i] <= 57)
			{
				num = (num * 10) + (s[i] - 48);
				i++;
			}
			break;
		}
		i++;
	}

	if (sign < 0)
		return (num * -1);
	else
		return (num);
}
