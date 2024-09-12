#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 *
 * @seperator: To seperate numbers
 * @n: number of members
 * Return: void
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i < n - 1 && seperator)
			printf("%s", seperator);
	}

	va_end(numbers);
	printf("\n");
}
