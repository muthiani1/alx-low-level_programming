#include "main.h"

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	int values[] = {1, 2, 5, 10, 25};
	int num;
	int i, coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	for (i = 4; i >= 0; i--)
	{
		while (num - values[i] >= 0)
		{
			num = num - values[i];
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
