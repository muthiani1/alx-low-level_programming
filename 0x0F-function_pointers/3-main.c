#include "3-calc.h"

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, res;
	char *op;
	int (*ofp)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	ofp = get_op_func(op);
	if (ofp == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	res = ofp(num1, num2);
	printf("%d\n", res);
	return (0);
}
