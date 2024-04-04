#include "main.h"

/**
 * puts2 - Prints every other character followed by a new line
 *
 * @str:string
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (!(i % 2))
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
