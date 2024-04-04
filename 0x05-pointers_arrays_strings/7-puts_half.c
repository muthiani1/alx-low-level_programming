#include "main.h"

/**
 * puts_half - prints second half of string
 *
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0, n;

	while (str[len] != '\0')
		len++;
	if (len > 0 && len % 2)
		n = (len + 1) / 2;
	else
		n = len / 2;
	while (n != 0 && str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
