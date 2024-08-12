#include "main.h"

int is_number(char *str)
{
	while (*str != '\0')
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

double strtonum(char *str)
{
	double p = 0;

	while (*str != '\0')
	{
		p = (p * 10) + (*str - '0');
		str++;
	}
	return (p);
}

int main(int argc, char *argv[])
{
	if (argc > 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	printf("%.0f\n", strtonum(argv[1]) * strtonum(argv[2]));

	return (0);
}
