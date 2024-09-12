#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 *
 * @seperator: used to seperate strings
 * @n: number of strings
 * Return: void
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list strings;

	va_start(strings, n);

	if (n == 0)
	{
	}
	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);
		if (string)
			printf("%s", string);
		else
			printf("(nil)");
		if (i < n - 1 && seperator)
			printf("%s", seperator);
	}

	va_end(strings);
	printf("\n");
}
