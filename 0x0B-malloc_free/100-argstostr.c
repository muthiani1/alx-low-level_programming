#include "main.h"

/**
 * argstostr - concatenates all the arguments of a program
 *
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k, size;

	size = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			size++;
	size += ac;

	ptr = (char *)malloc(size * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			ptr[k] = av[i][j];
			k++;
			j++;
		}
		ptr[k] = '\n';
		k++;
	}
	return (ptr);
}
