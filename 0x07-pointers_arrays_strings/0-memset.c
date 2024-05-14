#include "main.h"

/**
 * _memset - Fills memory with constant byte
 *
 * @s: memory area to fill
 * @b: byte to fill
 * @n: first bytes of memory area
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
