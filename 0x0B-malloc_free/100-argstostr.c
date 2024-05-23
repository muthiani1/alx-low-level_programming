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

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
	}

	ptr = (char *)malloc((size * sizeof(char)) + ac);
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
	ptr[k] = '\0';
	return (ptr);
}
