#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - printf opcodes
 *
 * @start: start of function
 * @num_bytes: number of bytes
 * Return: void
 */

void print_opcodes(unsigned char *start, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		if (i > 0)
			printf(" ");
		printf("%02x", start[i]);
	}
	printf("\n");
}

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned char *main_start = (unsigned char *)main;

	print_opcodes(main_start, num_bytes);
	return (0);
}
