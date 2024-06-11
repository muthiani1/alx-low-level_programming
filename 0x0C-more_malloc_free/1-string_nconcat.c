#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: bytes to concatenate
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int len1, len2, len3;
	char *s3;

	i = j = len1 = len2 = len3 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (len2 < n)
		n = len2;
	len3 = len1 + n;

	s3 = malloc((sizeof(char) * len3) + 1);
	if (s3 == NULL)
		return (NULL);

	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}
	while (i < len3)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[len3] = '\0';

	return (s3);
}
