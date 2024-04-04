#include "main.h"

/**
 * puts_half - prints second half of string
 *
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int len, n;

	len = strlen(str);
	if (len % 2)
		n = (len - 1) / 2;
	else
		n = len / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
}
