#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i != argc)
		printf("%s\n", argv[i++]);
	return (0);
}
