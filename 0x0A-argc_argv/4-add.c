#include "main.h"

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	int i = argc - 1;
	int sum = 0;

	while (i >= 1)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
		i--;
	}
				
	printf("%d\n", sum);
	return (0);
}
