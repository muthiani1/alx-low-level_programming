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
	int coins[] = {1, 2, 5, 10, 25};
	int i = 4;
	int num = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	while (i >= 0)
	{
		num = atoi(argv[1]);
		if (num < 0)
		{
			printf("0\n");
			break;
		}
		if (num < coins[i])
			i--;
		else
		{
			if (num % coins[i])
				printf("%d\n", (num / coins[i]) + 1);
			else
				printf("%d\n", num / coins[i]);
			break;
		}
	}
	return (0);
}

